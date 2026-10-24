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

// Function: entry_001d7cb4
// Address: 0x1d7cb4 - 0x1d7db0
void entry_001d7cb4_0x1d7cb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7cb4_0x1d7cb4");
#endif

    switch (ctx->pc) {
        case 0x1d7da0u: goto label_1d7da0;
        default: break;
    }

    ctx->pc = 0x1d7cb4u;

    // 0x1d7cb4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1d7cb4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1d7cb8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1d7cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7cbc: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x1d7cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1d7cc0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1d7cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7cc4: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x1d7cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x1d7cc8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1d7cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7ccc: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x1d7cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x1d7cd0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d7cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d7cd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7cd8: 0x0  nop
    ctx->pc = 0x1d7cd8u;
    // NOP
    // 0x1d7cdc: 0xe640002c  swc1        $f0, 0x2C($s2)
    ctx->pc = 0x1d7cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
    // 0x1d7ce0: 0xa6400004  sh          $zero, 0x4($s2)
    ctx->pc = 0x1d7ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d7ce4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7ce4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7ce8: 0x0  nop
    ctx->pc = 0x1d7ce8u;
    // NOP
    // 0x1d7cec: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1d7cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1d7cf0: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x1d7cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x1d7cf4: 0xa6420008  sh          $v0, 0x8($s2)
    ctx->pc = 0x1d7cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d7cf8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d7cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d7cfc: 0xa642000a  sh          $v0, 0xA($s2)
    ctx->pc = 0x1d7cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d7d00: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d7d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d7d04: 0xa642000c  sh          $v0, 0xC($s2)
    ctx->pc = 0x1d7d04u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d7d08: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d7d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d7d0c: 0xa642000e  sh          $v0, 0xE($s2)
    ctx->pc = 0x1d7d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d7d10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d7d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7d14: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x1d7d14u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d7d18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7d18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7d1c: 0x0  nop
    ctx->pc = 0x1d7d1cu;
    // NOP
    // 0x1d7d20: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x1d7d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x1d7d24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7d24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7d28: 0x0  nop
    ctx->pc = 0x1d7d28u;
    // NOP
    // 0x1d7d2c: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x1d7d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x1d7d30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7d30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7d34: 0x0  nop
    ctx->pc = 0x1d7d34u;
    // NOP
    // 0x1d7d38: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x1d7d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x1d7d3c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1d7d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7d40: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1d7d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7d44: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1d7d44u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d7d48: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1d7d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7d4c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1d7d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7d50: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d7d50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d7d54: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x1d7d54u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1d7d58: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1d7d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7d5c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1d7d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7d60: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1d7d60u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d7d64: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1d7d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7d68: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1d7d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7d6c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d7d6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d7d70: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1d7d70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1d7d74: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x1d7d74u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1d7d78: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1d7d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7d7c: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1d7d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7d80: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1d7d80u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d7d84: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1d7d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7d88: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1d7d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7d8c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d7d8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d7d90: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1d7d90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1d7d94: 0x46030300  add.s       $f12, $f0, $f3
    ctx->pc = 0x1d7d94u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1d7d98: 0xc045630  jal         func_1158C0
    ctx->pc = 0x1D7D98u;
    SET_GPR_U32(ctx, 31, 0x1D7DA0u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x1D7D98u, 0x1D7DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7DA0u;
label_1d7da0:
    // 0x1d7da0: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x1d7da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x1d7da4: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x1d7da4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1d7da8: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1d7da8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1d7dac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d7dacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x1d7db0u;
}
