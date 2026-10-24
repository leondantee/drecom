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

// Function: entry_00337b44
// Address: 0x337b44 - 0x337b94
void entry_00337b44_0x337b44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00337b44_0x337b44");
#endif

    ctx->pc = 0x337b44u;

    // 0x337b44: 0x2602663e  addiu       $v0, $s0, 0x663E
    ctx->pc = 0x337b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 26174));
    // 0x337b48: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337b4c: 0xac224ec0  sw          $v0, 0x4EC0($at)
    ctx->pc = 0x337b4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894EC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894EC0u, _value); } while (0);
    // 0x337b50: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337b54: 0x8c224e38  lw          $v0, 0x4E38($at)
    ctx->pc = 0x337b54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x894E38u));
    // 0x337b58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x337b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x337b5c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337b60: 0x8c244ec0  lw          $a0, 0x4EC0($at)
    ctx->pc = 0x337b60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x894EC0u));
    // 0x337b64: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x337b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x337b68: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337b6c: 0xac224ec0  sw          $v0, 0x4EC0($at)
    ctx->pc = 0x337b6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894EC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894EC0u, _value); } while (0);
    // 0x337b70: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337b74: 0x8c314ec0  lw          $s1, 0x4EC0($at)
    ctx->pc = 0x337b74u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x894EC0u));
    // 0x337b78: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337b7c: 0x8c224e50  lw          $v0, 0x4E50($at)
    ctx->pc = 0x337b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x894E50u));
    // 0x337b80: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x337b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x337b84: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x337b84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x337b88: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x337b88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x337b8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x337b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x337b90: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x337b90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x337b94u;
}
