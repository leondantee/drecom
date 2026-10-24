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

// Function: entry_00353438
// Address: 0x353438 - 0x3534e0
void entry_00353438_0x353438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00353438_0x353438");
#endif

    ctx->pc = 0x353438u;

    // 0x353438: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35343c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35343cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353440: 0x9064006f  lbu         $a0, 0x6F($v1)
    ctx->pc = 0x353440u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 111)));
    // 0x353444: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353448: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35344c: 0xa0640070  sb          $a0, 0x70($v1)
    ctx->pc = 0x35344cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 112), (uint8_t)GPR_U32(ctx, 4));
    // 0x353450: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x353450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353454: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353458: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35345c: 0xa064006e  sb          $a0, 0x6E($v1)
    ctx->pc = 0x35345cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 4));
    // 0x353460: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353464: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353468: 0xa0600074  sb          $zero, 0x74($v1)
    ctx->pc = 0x353468u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x35346c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35346cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353470: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353474: 0x90630071  lbu         $v1, 0x71($v1)
    ctx->pc = 0x353474u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 113)));
    // 0x353478: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x353478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x35347c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x35347cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x353480: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353484: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x353484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x353488: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x353488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x35348c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35348cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x353490: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x353490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x353494: 0x8c700244  lw          $s0, 0x244($v1)
    ctx->pc = 0x353494u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 580)));
    // 0x353498: 0xde030050  ld          $v1, 0x50($s0)
    ctx->pc = 0x353498u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x35349c: 0x3903e  dsrl32      $s2, $v1, 0
    ctx->pc = 0x35349cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3534a0: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x3534a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x3534a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3534a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3534a8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3534a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3534ac: 0xa0640073  sb          $a0, 0x73($v1)
    ctx->pc = 0x3534acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 115), (uint8_t)GPR_U32(ctx, 4));
    // 0x3534b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3534b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3534b4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3534b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3534b8: 0x90630070  lbu         $v1, 0x70($v1)
    ctx->pc = 0x3534b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x3534bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3534bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3534c0: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x3534c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3534c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3534c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3534c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3534c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3534cc: 0x8c700244  lw          $s0, 0x244($v1)
    ctx->pc = 0x3534ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 580)));
    // 0x3534d0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x3534d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3534d4: 0xfe030050  sd          $v1, 0x50($s0)
    ctx->pc = 0x3534d4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 3));
    // 0x3534d8: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x3534d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3534dc: 0xfe0301a0  sd          $v1, 0x1A0($s0)
    ctx->pc = 0x3534dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 416), GPR_U64(ctx, 3));
    ctx->pc = 0x3534e0u;
}
