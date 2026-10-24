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

// Function: entry_00259de0
// Address: 0x259de0 - 0x259ee4
void entry_00259de0_0x259de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00259de0_0x259de0");
#endif

    switch (ctx->pc) {
        case 0x259e6cu: goto label_259e6c;
        case 0x259eb0u: goto label_259eb0;
        default: break;
    }

    ctx->pc = 0x259de0u;

    // 0x259de0: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x259de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x259de4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x259de4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x259de8: 0x0  nop
    ctx->pc = 0x259de8u;
    // NOP
    // 0x259dec: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x259decu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x259df0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x259df0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x259df4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259df8: 0xe44009d0  swc1        $f0, 0x9D0($v0)
    ctx->pc = 0x259df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2512), bits); }
    // 0x259dfc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259e00: 0x24420300  addiu       $v0, $v0, 0x300
    ctx->pc = 0x259e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x259e04: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x259e04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259e08: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x259e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x259e0c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x259e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x259e10: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x259e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259e14: 0xc48009d0  lwc1        $f0, 0x9D0($a0)
    ctx->pc = 0x259e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259e18: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x259e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x259e1c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259e20: 0xc44009d4  lwc1        $f0, 0x9D4($v0)
    ctx->pc = 0x259e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259e24: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x259e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x259e28: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259e2c: 0x944309e0  lhu         $v1, 0x9E0($v0)
    ctx->pc = 0x259e2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
    // 0x259e30: 0xa7a300a8  sh          $v1, 0xA8($sp)
    ctx->pc = 0x259e30u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 168), (uint16_t)GPR_U32(ctx, 3));
    // 0x259e34: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x259e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x259e38: 0xa7a200aa  sh          $v0, 0xAA($sp)
    ctx->pc = 0x259e38u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 170), (uint16_t)GPR_U32(ctx, 2));
    // 0x259e3c: 0x8fb200e8  lw          $s2, 0xE8($sp)
    ctx->pc = 0x259e3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259e40: 0x8e4305f0  lw          $v1, 0x5F0($s2)
    ctx->pc = 0x259e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1520)));
    // 0x259e44: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x259e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x259e48: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259e4c: 0x90520012  lbu         $s2, 0x12($v0)
    ctx->pc = 0x259e4cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x259e50: 0xa3b200c0  sb          $s2, 0xC0($sp)
    ctx->pc = 0x259e50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 18));
    // 0x259e54: 0x8fb200e8  lw          $s2, 0xE8($sp)
    ctx->pc = 0x259e54u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259e58: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x259e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x259e5c: 0x264502e0  addiu       $a1, $s2, 0x2E0
    ctx->pc = 0x259e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
    // 0x259e60: 0x27a600d8  addiu       $a2, $sp, 0xD8
    ctx->pc = 0x259e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x259e64: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x259E64u;
    SET_GPR_U32(ctx, 31, 0x259E6Cu);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x259E64u, 0x259E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259E6Cu;
label_259e6c:
    // 0x259e6c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259e70: 0x244202e0  addiu       $v0, $v0, 0x2E0
    ctx->pc = 0x259e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
    // 0x259e74: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x259e74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259e78: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259e7c: 0x245002f0  addiu       $s0, $v0, 0x2F0
    ctx->pc = 0x259e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
    // 0x259e80: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x259e80u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x259e84: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259e88: 0xc44009d4  lwc1        $f0, 0x9D4($v0)
    ctx->pc = 0x259e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259e8c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x259e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x259e90: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x259e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x259e94: 0xa7a200aa  sh          $v0, 0xAA($sp)
    ctx->pc = 0x259e94u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 170), (uint16_t)GPR_U32(ctx, 2));
    // 0x259e98: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259e9c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x259e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x259ea0: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x259ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x259ea4: 0x27a600d8  addiu       $a2, $sp, 0xD8
    ctx->pc = 0x259ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x259ea8: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x259EA8u;
    SET_GPR_U32(ctx, 31, 0x259EB0u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x259EA8u, 0x259EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259EB0u;
label_259eb0:
    // 0x259eb0: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x259eb0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x259eb4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x259eb4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x259eb8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x259eb8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x259ebc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x259ebcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x259ec0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x259ec0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x259ec4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x259ec4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x259ec8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x259ec8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259ecc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x259eccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259ed0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x259ed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259ed4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259ed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259ed8: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x259ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x259edc: 0x3e00008  jr          $ra
    ctx->pc = 0x259EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259EE4u;
}
