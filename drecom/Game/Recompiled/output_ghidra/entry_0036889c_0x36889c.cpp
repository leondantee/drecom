#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0036889c
// Address: 0x36889c - 0x368930
void entry_0036889c_0x36889c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036889c_0x36889c");
#endif

    switch (ctx->pc) {
        case 0x3688d4u: goto label_3688d4;
        default: break;
    }

    ctx->pc = 0x36889cu;

    // 0x36889c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x36889cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3688a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3688a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3688a4: 0xa0430010  sb          $v1, 0x10($v0)
    ctx->pc = 0x3688a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x3688a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3688a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3688ac: 0x90420013  lbu         $v0, 0x13($v0)
    ctx->pc = 0x3688acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x3688b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3688b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3688b4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3688b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3688b8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3688b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3688bc: 0x2442af10  addiu       $v0, $v0, -0x50F0
    ctx->pc = 0x3688bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946576));
    // 0x3688c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3688c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3688c4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x3688c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3688c8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3688c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3688cc: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x3688CCu;
    SET_GPR_U32(ctx, 31, 0x3688D4u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x3688CCu, 0x3688D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3688D4u;
label_3688d4:
    // 0x3688d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3688d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3688d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3688d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3688dc: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x3688dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x3688e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3688e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3688e4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x3688e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3688e8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x3688e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x3688ec: 0x2463af20  addiu       $v1, $v1, -0x50E0
    ctx->pc = 0x3688ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946592));
    // 0x3688f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3688f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3688f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3688f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3688f8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3688f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3688fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3688fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368900: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x368900u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x368904: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x368904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x368908: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x368908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x36890c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x36890cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368910: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x368910u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x368914: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x368914u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x368918: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x368918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x36891c: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x36891cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x368920: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x368920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x368924: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x368924u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x368928: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x368928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36892c: 0xa0830012  sb          $v1, 0x12($a0)
    ctx->pc = 0x36892cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x368930u;
}
