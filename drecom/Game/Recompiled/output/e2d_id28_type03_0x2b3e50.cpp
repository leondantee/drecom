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

// Function: e2d_id28_type03
// Address: 0x2b3e50 - 0x2b3f20
void e2d_id28_type03_0x2b3e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id28_type03_0x2b3e50");
#endif

    switch (ctx->pc) {
        case 0x2b3e6cu: goto label_2b3e6c;
        default: break;
    }

    ctx->pc = 0x2b3e50u;

    // 0x2b3e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3e54: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b3e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b3e58: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b3e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b3e5c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3e60: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x2b3e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x2b3e64: 0xc0c9bf0  jal         func_326FC0
    ctx->pc = 0x2B3E64u;
    SET_GPR_U32(ctx, 31, 0x2B3E6Cu);
    ctx->pc = 0x326FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326FC0u, 0x2B3E64u, 0x2B3E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3E6Cu;
label_2b3e6c:
    // 0x2b3e6c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b3e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b3e70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3e74: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b3e74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b3e78: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2b3e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2b3e7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3e7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3e80: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3e84: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x2b3e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x2b3e88: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x2b3e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x2b3e8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3e8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3e90: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3e94: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2b3e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2b3e98: 0x3c03c0a0  lui         $v1, 0xC0A0
    ctx->pc = 0x2b3e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49312 << 16));
    // 0x2b3e9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3e9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3ea0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3ea4: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x2b3ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x2b3ea8: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2b3ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2b3eac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3eacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3eb0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3eb4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b3eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b3eb8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b3eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b3ebc: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b3ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b3ec0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b3ec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b3ec4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b3ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b3ec8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b3ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b3ecc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b3eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b3ed0: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b3ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b3ed4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b3ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b3ed8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b3ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b3edc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b3edcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b3ee0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b3ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b3ee4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b3ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b3ee8: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b3ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b3eec: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b3eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b3ef0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b3ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b3ef4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b3ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b3ef8: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b3ef8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b3efc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b3efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b3f00: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b3f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b3f04: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b3f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b3f08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3f0c: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2b3f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b3f10: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b3f10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3f14: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b3f14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b3f18: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3F20u;
}
