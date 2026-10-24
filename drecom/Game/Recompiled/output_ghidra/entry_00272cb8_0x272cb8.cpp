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

// Function: entry_00272cb8
// Address: 0x272cb8 - 0x272d58
void entry_00272cb8_0x272cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00272cb8_0x272cb8");
#endif

    ctx->pc = 0x272cb8u;

    // 0x272cb8: 0x8e021bf0  lw          $v0, 0x1BF0($s0)
    ctx->pc = 0x272cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272cbc: 0x2c4200aa  sltiu       $v0, $v0, 0xAA
    ctx->pc = 0x272cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)170) ? 1 : 0);
    // 0x272cc0: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x272CC0u;
    {
        const bool branch_taken_0x272cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272cc0) {
            ctx->pc = 0x272D58u;
            return;
        }
    }
    ctx->pc = 0x272CC8u;
    // 0x272cc8: 0x8e021bf0  lw          $v0, 0x1BF0($s0)
    ctx->pc = 0x272cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272ccc: 0x2c4100b5  sltiu       $at, $v0, 0xB5
    ctx->pc = 0x272cccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)181) ? 1 : 0);
    // 0x272cd0: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x272CD0u;
    {
        const bool branch_taken_0x272cd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x272cd0) {
            ctx->pc = 0x272D58u;
            return;
        }
    }
    ctx->pc = 0x272CD8u;
    // 0x272cd8: 0x8e021bf0  lw          $v0, 0x1BF0($s0)
    ctx->pc = 0x272cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272cdc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x272cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x272ce0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x272CE0u;
    {
        const bool branch_taken_0x272ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272ce0) {
            ctx->pc = 0x272D58u;
            return;
        }
    }
    ctx->pc = 0x272CE8u;
    // 0x272ce8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x272ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x272cec: 0x8c31bb4c  lw          $s1, -0x44B4($at)
    ctx->pc = 0x272cecu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x272cf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x272cf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272cf4: 0x0  nop
    ctx->pc = 0x272cf4u;
    // NOP
    // 0x272cf8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x272cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x272cfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x272cfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272d00: 0x0  nop
    ctx->pc = 0x272d00u;
    // NOP
    // 0x272d04: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x272d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x272d08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x272d08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272d0c: 0x0  nop
    ctx->pc = 0x272d0cu;
    // NOP
    // 0x272d10: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x272d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x272d14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x272d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x272d18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x272d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272d1c: 0x0  nop
    ctx->pc = 0x272d1cu;
    // NOP
    // 0x272d20: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x272d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x272d24: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x272d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
    // 0x272d28: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x272d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x272d2c: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x272d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x272d30: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x272d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x272d34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x272d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x272d38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x272d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x272d3c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x272d3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x272d40: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x272d40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x272d44: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x272d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x272d48: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x272d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x272d4c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x272d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x272d50: 0xc086488  jal         func_219220
    ctx->pc = 0x272D50u;
    SET_GPR_U32(ctx, 31, 0x272D58u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x272D50u, 0x272D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272D58u;
}
