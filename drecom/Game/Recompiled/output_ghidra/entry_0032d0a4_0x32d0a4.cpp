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

// Function: entry_0032d0a4
// Address: 0x32d0a4 - 0x32d120
void entry_0032d0a4_0x32d0a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032d0a4_0x32d0a4");
#endif

    ctx->pc = 0x32d0a4u;

    // 0x32d0a4: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x32d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x32d0a8: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x32d0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x32d0ac: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x32d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x32d0b0: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x32d0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x32d0b4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x32d0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x32d0b8: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x32d0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x32d0bc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32d0c0: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x32d0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x32d0c4: 0x86e210a6  lh          $v0, 0x10A6($s7)
    ctx->pc = 0x32d0c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 4262)));
    // 0x32d0c8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x32d0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32d0cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32d0ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32d0d0: 0x2841012c  slti        $at, $v0, 0x12C
    ctx->pc = 0x32d0d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)300) ? 1 : 0);
    // 0x32d0d4: 0x10200050  beqz        $at, . + 4 + (0x50 << 2)
    ctx->pc = 0x32D0D4u;
    {
        const bool branch_taken_0x32d0d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d0d4) {
            ctx->pc = 0x32D218u;
            return;
        }
    }
    ctx->pc = 0x32D0DCu;
    // 0x32d0dc: 0x8e222828  lw          $v0, 0x2828($s1)
    ctx->pc = 0x32d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10280)));
    // 0x32d0e0: 0x28410032  slti        $at, $v0, 0x32
    ctx->pc = 0x32d0e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x32d0e4: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x32D0E4u;
    {
        const bool branch_taken_0x32d0e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d0e4) {
            ctx->pc = 0x32D120u;
            return;
        }
    }
    ctx->pc = 0x32D0ECu;
    // 0x32d0ec: 0x8e222828  lw          $v0, 0x2828($s1)
    ctx->pc = 0x32d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10280)));
    // 0x32d0f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d0f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d0f4: 0x0  nop
    ctx->pc = 0x32d0f4u;
    // NOP
    // 0x32d0f8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d0f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32d0fc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x32d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x32d100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d104: 0x0  nop
    ctx->pc = 0x32d104u;
    // NOP
    // 0x32d108: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x32d108u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x32d10c: 0x0  nop
    ctx->pc = 0x32d10cu;
    // NOP
    // 0x32d110: 0x0  nop
    ctx->pc = 0x32d110u;
    // NOP
    // 0x32d114: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x32d114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x32d118: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x32D118u;
    {
        const bool branch_taken_0x32d118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d118) {
            ctx->pc = 0x32D150u;
            return;
        }
    }
    ctx->pc = 0x32D120u;
}
