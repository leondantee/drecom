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

// Function: entry_0028af8c
// Address: 0x28af8c - 0x28afe8
void entry_0028af8c_0x28af8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028af8c_0x28af8c");
#endif

    ctx->pc = 0x28af8cu;

    // 0x28af8c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28af8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28af90: 0x8c2a2040  lw          $t2, 0x2040($at)
    ctx->pc = 0x28af90u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x622040u));
    // 0x28af94: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x28af94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x28af98: 0x34670011  ori         $a3, $v1, 0x11
    ctx->pc = 0x28af98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x28af9c: 0x11470017  beq         $t2, $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x28AF9Cu;
    {
        const bool branch_taken_0x28af9c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 7));
        if (branch_taken_0x28af9c) {
            ctx->pc = 0x28AFFCu;
            return;
        }
    }
    ctx->pc = 0x28AFA4u;
    // 0x28afa4: 0x2409008c  addiu       $t1, $zero, 0x8C
    ctx->pc = 0x28afa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x28afa8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28afa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28afac: 0x8c262040  lw          $a2, 0x2040($at)
    ctx->pc = 0x28afacu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x622040u));
    // 0x28afb0: 0xa0c9011c  sb          $t1, 0x11C($a2)
    ctx->pc = 0x28afb0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 284), (uint8_t)GPR_U32(ctx, 9));
    // 0x28afb4: 0x82495dea  lb          $t1, 0x5DEA($s2)
    ctx->pc = 0x28afb4u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24042)));
    // 0x28afb8: 0x93e3c  dsll32      $a3, $t1, 24
    ctx->pc = 0x28afb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) << (32 + 24));
    // 0x28afbc: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x28afbcu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x28afc0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28afc4: 0x14e30008  bne         $a3, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28AFC4u;
    {
        const bool branch_taken_0x28afc4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x28afc4) {
            ctx->pc = 0x28AFE8u;
            return;
        }
    }
    ctx->pc = 0x28AFCCu;
    // 0x28afcc: 0x3c084220  lui         $t0, 0x4220
    ctx->pc = 0x28afccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16928 << 16));
    // 0x28afd0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x28afd0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28afd4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28afd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28afd8: 0x8c262040  lw          $a2, 0x2040($at)
    ctx->pc = 0x28afd8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x622040u));
    // 0x28afdc: 0xe4c0009c  swc1        $f0, 0x9C($a2)
    ctx->pc = 0x28afdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 156), bits); }
    // 0x28afe0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28AFE0u;
    {
        const bool branch_taken_0x28afe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28afe0) {
            ctx->pc = 0x28AFFCu;
            return;
        }
    }
    ctx->pc = 0x28AFE8u;
}
