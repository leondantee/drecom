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

// Function: entry_00272d58
// Address: 0x272d58 - 0x272de0
void entry_00272d58_0x272d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00272d58_0x272d58");
#endif

    switch (ctx->pc) {
        case 0x272ddcu: goto label_272ddc;
        default: break;
    }

    ctx->pc = 0x272d58u;

    // 0x272d58: 0x8e031bf0  lw          $v1, 0x1BF0($s0)
    ctx->pc = 0x272d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272d5c: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x272d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x272d60: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x272D60u;
    {
        const bool branch_taken_0x272d60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x272d60) {
            ctx->pc = 0x272DE0u;
            return;
        }
    }
    ctx->pc = 0x272D68u;
    // 0x272d68: 0x3c024616  lui         $v0, 0x4616
    ctx->pc = 0x272d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17942 << 16));
    // 0x272d6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x272d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272d70: 0x0  nop
    ctx->pc = 0x272d70u;
    // NOP
    // 0x272d74: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x272d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x272d78: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x272d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x272d7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x272d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272d80: 0x0  nop
    ctx->pc = 0x272d80u;
    // NOP
    // 0x272d84: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x272d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x272d88: 0x3c02c5a2  lui         $v0, 0xC5A2
    ctx->pc = 0x272d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50594 << 16));
    // 0x272d8c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x272d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x272d90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x272d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272d94: 0x0  nop
    ctx->pc = 0x272d94u;
    // NOP
    // 0x272d98: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x272d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x272d9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x272d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x272da0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x272da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272da4: 0x0  nop
    ctx->pc = 0x272da4u;
    // NOP
    // 0x272da8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x272da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x272dac: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x272dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x272db0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x272db0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x272db4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x272db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x272db8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x272db8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x272dbc: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x272dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
    // 0x272dc0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x272dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x272dc4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x272dc4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x272dc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x272dc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x272dcc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x272dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x272dd0: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x272dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x272dd4: 0xc086488  jal         func_219220
    ctx->pc = 0x272DD4u;
    SET_GPR_U32(ctx, 31, 0x272DDCu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x272DD4u, 0x272DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272DDCu;
label_272ddc:
    // 0x272ddc: 0x0  nop
    ctx->pc = 0x272ddcu;
    // NOP
    ctx->pc = 0x272de0u;
}
