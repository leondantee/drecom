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

// Function: entry_00263484
// Address: 0x263484 - 0x2634bc
void entry_00263484_0x263484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263484_0x263484");
#endif

    ctx->pc = 0x263484u;

    // 0x263484: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x263484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x263488: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x263488u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26348c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x26348cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x263490: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x263490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x263494: 0x24520002  addiu       $s2, $v0, 0x2
    ctx->pc = 0x263494u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x263498: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x263498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x26349c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x26349cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2634a0: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x2634a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x2634a4: 0x3042fffc  andi        $v0, $v0, 0xFFFC
    ctx->pc = 0x2634a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65532);
    // 0x2634a8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2634a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2634ac: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x2634acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2634b0: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x2634b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2634b4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2634b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2634b8: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2634b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x2634bcu;
}
