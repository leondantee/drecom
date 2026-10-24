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

// Function: entry_001e89ac
// Address: 0x1e89ac - 0x1e8a00
void entry_001e89ac_0x1e89ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e89ac_0x1e89ac");
#endif

    ctx->pc = 0x1e89acu;

    // 0x1e89ac: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e89acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e89b0: 0x848311f2  lh          $v1, 0x11F2($a0)
    ctx->pc = 0x1e89b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4594)));
    // 0x1e89b4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1e89b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1e89b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1e89b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1e89bc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1e89bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1e89c0: 0x3c046666  lui         $a0, 0x6666
    ctx->pc = 0x1e89c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26214 << 16));
    // 0x1e89c4: 0x34826667  ori         $v0, $a0, 0x6667
    ctx->pc = 0x1e89c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26215);
    // 0x1e89c8: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1e89c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1e89cc: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x1e89ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1e89d0: 0x0  nop
    ctx->pc = 0x1e89d0u;
    // NOP
    // 0x1e89d4: 0x1010  mfhi        $v0
    ctx->pc = 0x1e89d4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1e89d8: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x1e89d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1e89dc: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1e89dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e89e0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1e89e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e89e4: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x1e89e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1e89e8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1e89e8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1e89ec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1e89ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1e89f0: 0x8423ef68  lh          $v1, -0x1098($at)
    ctx->pc = 0x1e89f0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF68u));
    // 0x1e89f4: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1e89f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e89f8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1e89f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1e89fc: 0xa424ef68  sh          $a0, -0x1098($at)
    ctx->pc = 0x1e89fcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3EEF68u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEF68u, _value); } while (0);
    ctx->pc = 0x1e8a00u;
}
