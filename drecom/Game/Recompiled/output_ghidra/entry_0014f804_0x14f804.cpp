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

// Function: entry_0014f804
// Address: 0x14f804 - 0x14f888
void entry_0014f804_0x14f804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f804_0x14f804");
#endif

    switch (ctx->pc) {
        case 0x14f87cu: goto label_14f87c;
        default: break;
    }

    ctx->pc = 0x14f804u;

    // 0x14f804: 0x8ec20130  lw          $v0, 0x130($s6)
    ctx->pc = 0x14f804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 304)));
    // 0x14f808: 0x24420700  addiu       $v0, $v0, 0x700
    ctx->pc = 0x14f808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x14f80c: 0xae8200c0  sw          $v0, 0xC0($s4)
    ctx->pc = 0x14f80cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 192), GPR_U32(ctx, 2));
    // 0x14f810: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f810u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f814: 0x0  nop
    ctx->pc = 0x14f814u;
    // NOP
    // 0x14f818: 0xe68000d0  swc1        $f0, 0xD0($s4)
    ctx->pc = 0x14f818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 208), bits); }
    // 0x14f81c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f81cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f820: 0x0  nop
    ctx->pc = 0x14f820u;
    // NOP
    // 0x14f824: 0xe68000d4  swc1        $f0, 0xD4($s4)
    ctx->pc = 0x14f824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 212), bits); }
    // 0x14f828: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x14f828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x14f82c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f834: 0x0  nop
    ctx->pc = 0x14f834u;
    // NOP
    // 0x14f838: 0xe68000d8  swc1        $f0, 0xD8($s4)
    ctx->pc = 0x14f838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 216), bits); }
    // 0x14f83c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f83cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f840: 0x0  nop
    ctx->pc = 0x14f840u;
    // NOP
    // 0x14f844: 0xe6800120  swc1        $f0, 0x120($s4)
    ctx->pc = 0x14f844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 288), bits); }
    // 0x14f848: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f848u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f84c: 0x0  nop
    ctx->pc = 0x14f84cu;
    // NOP
    // 0x14f850: 0xe6800124  swc1        $f0, 0x124($s4)
    ctx->pc = 0x14f850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 292), bits); }
    // 0x14f854: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f854u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f858: 0x0  nop
    ctx->pc = 0x14f858u;
    // NOP
    // 0x14f85c: 0xe6800128  swc1        $f0, 0x128($s4)
    ctx->pc = 0x14f85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 296), bits); }
    // 0x14f860: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14f860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14f864: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f868: 0x0  nop
    ctx->pc = 0x14f868u;
    // NOP
    // 0x14f86c: 0xe680012c  swc1        $f0, 0x12C($s4)
    ctx->pc = 0x14f86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 300), bits); }
    // 0x14f870: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x14f870u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x14f874: 0xc097a5c  jal         func_25E970
    ctx->pc = 0x14F874u;
    SET_GPR_U32(ctx, 31, 0x14F87Cu);
    ctx->pc = 0x25E970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E970u, 0x14F874u, 0x14F87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F87Cu;
label_14f87c:
    // 0x14f87c: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x14f87cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x14f880: 0xc05c04c  jal         func_170130
    ctx->pc = 0x14F880u;
    SET_GPR_U32(ctx, 31, 0x14F888u);
    ctx->pc = 0x170130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170130u, 0x14F880u, 0x14F888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F888u;
}
