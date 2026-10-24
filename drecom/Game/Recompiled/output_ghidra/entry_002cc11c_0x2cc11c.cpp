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

// Function: entry_002cc11c
// Address: 0x2cc11c - 0x2cc208
void entry_002cc11c_0x2cc11c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cc11c_0x2cc11c");
#endif

    switch (ctx->pc) {
        case 0x2cc168u: goto label_2cc168;
        case 0x2cc1a0u: goto label_2cc1a0;
        case 0x2cc1d8u: goto label_2cc1d8;
        default: break;
    }

    ctx->pc = 0x2cc11cu;

    // 0x2cc11c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc120: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2cc120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2cc124: 0x24501db0  addiu       $s0, $v0, 0x1DB0
    ctx->pc = 0x2cc124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7600));
    // 0x2cc128: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc12c: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x2cc12cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cc130: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2cc130u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2cc134: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2cc134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2cc138: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cc138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cc13c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2CC13Cu;
    {
        const bool branch_taken_0x2cc13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc13c) {
            ctx->pc = 0x2CC208u;
            return;
        }
    }
    ctx->pc = 0x2CC144u;
    // 0x2cc144: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2cc144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc148: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x2cc148u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2cc14c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2cc14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2cc150: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2cc150u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cc154: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2cc154u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2cc158: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2cc158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2cc15c: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2cc15cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cc160: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CC160u;
    SET_GPR_U32(ctx, 31, 0x2CC168u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CC160u, 0x2CC168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC168u;
label_2cc168:
    // 0x2cc168: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cc168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cc16c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cc16cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc170: 0x0  nop
    ctx->pc = 0x2cc170u;
    // NOP
    // 0x2cc174: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cc174u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cc178: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2cc178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2cc17c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc17cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc180: 0x0  nop
    ctx->pc = 0x2cc180u;
    // NOP
    // 0x2cc184: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cc184u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc188: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2cc188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc18c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc18cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc190: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc194: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2cc194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2cc198: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CC198u;
    SET_GPR_U32(ctx, 31, 0x2CC1A0u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CC198u, 0x2CC1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC1A0u;
label_2cc1a0:
    // 0x2cc1a0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cc1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cc1a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cc1a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc1a8: 0x0  nop
    ctx->pc = 0x2cc1a8u;
    // NOP
    // 0x2cc1ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cc1acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cc1b0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2cc1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2cc1b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc1b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc1b8: 0x0  nop
    ctx->pc = 0x2cc1b8u;
    // NOP
    // 0x2cc1bc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cc1bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc1c0: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2cc1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc1c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc1c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc1c8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc1cc: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2cc1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2cc1d0: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CC1D0u;
    SET_GPR_U32(ctx, 31, 0x2CC1D8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CC1D0u, 0x2CC1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC1D8u;
label_2cc1d8:
    // 0x2cc1d8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cc1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cc1dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cc1dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc1e0: 0x0  nop
    ctx->pc = 0x2cc1e0u;
    // NOP
    // 0x2cc1e4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cc1e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cc1e8: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2cc1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2cc1ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc1ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc1f0: 0x0  nop
    ctx->pc = 0x2cc1f0u;
    // NOP
    // 0x2cc1f4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cc1f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc1f8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2cc1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc1fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc1fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc200: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc204: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2cc204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    ctx->pc = 0x2cc208u;
}
