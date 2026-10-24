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

// Function: entry_002cc208
// Address: 0x2cc208 - 0x2cc2f4
void entry_002cc208_0x2cc208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cc208_0x2cc208");
#endif

    switch (ctx->pc) {
        case 0x2cc254u: goto label_2cc254;
        case 0x2cc28cu: goto label_2cc28c;
        case 0x2cc2c4u: goto label_2cc2c4;
        default: break;
    }

    ctx->pc = 0x2cc208u;

    // 0x2cc208: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc20c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2cc20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2cc210: 0x24502580  addiu       $s0, $v0, 0x2580
    ctx->pc = 0x2cc210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
    // 0x2cc214: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc218: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x2cc218u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cc21c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2cc21cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2cc220: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2cc220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2cc224: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cc224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cc228: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2CC228u;
    {
        const bool branch_taken_0x2cc228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc228) {
            ctx->pc = 0x2CC2F4u;
            return;
        }
    }
    ctx->pc = 0x2CC230u;
    // 0x2cc230: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2cc230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc234: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x2cc234u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2cc238: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2cc238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2cc23c: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2cc23cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cc240: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2cc240u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2cc244: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2cc244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2cc248: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2cc248u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cc24c: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CC24Cu;
    SET_GPR_U32(ctx, 31, 0x2CC254u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CC24Cu, 0x2CC254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC254u;
label_2cc254:
    // 0x2cc254: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cc254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cc258: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cc258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc25c: 0x0  nop
    ctx->pc = 0x2cc25cu;
    // NOP
    // 0x2cc260: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cc260u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cc264: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2cc264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2cc268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc26c: 0x0  nop
    ctx->pc = 0x2cc26cu;
    // NOP
    // 0x2cc270: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cc270u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc274: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2cc274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc278: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc278u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc27c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc280: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2cc280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2cc284: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CC284u;
    SET_GPR_U32(ctx, 31, 0x2CC28Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CC284u, 0x2CC28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC28Cu;
label_2cc28c:
    // 0x2cc28c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cc28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cc290: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cc290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc294: 0x0  nop
    ctx->pc = 0x2cc294u;
    // NOP
    // 0x2cc298: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cc298u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cc29c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2cc29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2cc2a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc2a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc2a4: 0x0  nop
    ctx->pc = 0x2cc2a4u;
    // NOP
    // 0x2cc2a8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cc2a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc2ac: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2cc2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc2b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc2b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc2b4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc2b8: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2cc2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2cc2bc: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CC2BCu;
    SET_GPR_U32(ctx, 31, 0x2CC2C4u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CC2BCu, 0x2CC2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC2C4u;
label_2cc2c4:
    // 0x2cc2c4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cc2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cc2c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cc2c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc2cc: 0x0  nop
    ctx->pc = 0x2cc2ccu;
    // NOP
    // 0x2cc2d0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cc2d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cc2d4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2cc2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2cc2d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc2d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc2dc: 0x0  nop
    ctx->pc = 0x2cc2dcu;
    // NOP
    // 0x2cc2e0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cc2e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc2e4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2cc2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc2e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc2e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc2ec: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc2f0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2cc2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    ctx->pc = 0x2cc2f4u;
}
