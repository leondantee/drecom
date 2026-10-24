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

// Function: entry_002209d8
// Address: 0x2209d8 - 0x220a2c
void entry_002209d8_0x2209d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002209d8_0x2209d8");
#endif

    ctx->pc = 0x2209d8u;

    // 0x2209d8: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x2209d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2209dc: 0x84c411f2  lh          $a0, 0x11F2($a2)
    ctx->pc = 0x2209dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4594)));
    // 0x2209e0: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2209e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2209e4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2209e4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2209e8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2209e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2209ec: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x2209ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x2209f0: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x2209f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x2209f4: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x2209f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2209f8: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x2209f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2209fc: 0x0  nop
    ctx->pc = 0x2209fcu;
    // NOP
    // 0x220a00: 0x2810  mfhi        $a1
    ctx->pc = 0x220a00u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x220a04: 0x530c3  sra         $a2, $a1, 3
    ctx->pc = 0x220a04u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 3));
    // 0x220a08: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x220a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x220a0c: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x220a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x220a10: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x220a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
    // 0x220a14: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x220a14u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x220a18: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x220a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x220a1c: 0x8423ef68  lh          $v1, -0x1098($at)
    ctx->pc = 0x220a1cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF68u));
    // 0x220a20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x220a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x220a24: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x220a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x220a28: 0xa423ef68  sh          $v1, -0x1098($at)
    ctx->pc = 0x220a28u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EEF68u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEF68u, _value); } while (0);
    ctx->pc = 0x220a2cu;
}
