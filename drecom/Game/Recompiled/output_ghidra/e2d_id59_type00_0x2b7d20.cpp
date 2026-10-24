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

// Function: e2d_id59_type00
// Address: 0x2b7d20 - 0x2b7e78
void e2d_id59_type00_0x2b7d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id59_type00_0x2b7d20");
#endif

    switch (ctx->pc) {
        case 0x2b7d88u: goto label_2b7d88;
        default: break;
    }

    ctx->pc = 0x2b7d20u;

    // 0x2b7d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b7d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b7d24: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b7d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b7d28: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b7d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b7d2c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b7d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b7d30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b7d30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7d34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7d38: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b7d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b7d3c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b7d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b7d40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b7d40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7d44: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7d48: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b7d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b7d4c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b7d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b7d50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b7d50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7d54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7d58: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b7d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b7d5c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2b7d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2b7d60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b7d60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7d64: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7d68: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b7d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b7d6c: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x2b7d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x2b7d70: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2b7d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2b7d74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b7d74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7d78: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7d7c: 0xe44000f4  swc1        $f0, 0xF4($v0)
    ctx->pc = 0x2b7d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    // 0x2b7d80: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2B7D80u;
    SET_GPR_U32(ctx, 31, 0x2B7D88u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2B7D80u, 0x2B7D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7D88u;
label_2b7d88:
    // 0x2b7d88: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b7d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b7d8c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b7d8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b7d90: 0x0  nop
    ctx->pc = 0x2b7d90u;
    // NOP
    // 0x2b7d94: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b7d94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b7d98: 0x3c0343af  lui         $v1, 0x43AF
    ctx->pc = 0x2b7d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17327 << 16));
    // 0x2b7d9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7d9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7da0: 0x0  nop
    ctx->pc = 0x2b7da0u;
    // NOP
    // 0x2b7da4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b7da4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b7da8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7dac: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b7dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b7db0: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2b7db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2b7db4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7db4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7db8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7dbc: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2b7dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2b7dc0: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2b7dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2b7dc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7dc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7dc8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7dcc: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2b7dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2b7dd0: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2b7dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2b7dd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7dd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7dd8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7ddc: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2b7ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2b7de0: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2b7de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2b7de4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7de4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7de8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7dec: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2b7decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2b7df0: 0x3c03bfcc  lui         $v1, 0xBFCC
    ctx->pc = 0x2b7df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49100 << 16));
    // 0x2b7df4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b7df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b7df8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7df8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7dfc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7e00: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x2b7e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x2b7e04: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2b7e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b7e08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7e0c: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2b7e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b7e10: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b7e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b7e14: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b7e14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b7e18: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b7e18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b7e1c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b7e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b7e20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b7e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b7e24: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b7e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b7e28: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b7e28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b7e2c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b7e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b7e30: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b7e30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b7e34: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b7e34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b7e38: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b7e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b7e3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b7e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b7e40: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b7e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b7e44: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b7e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b7e48: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b7e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b7e4c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b7e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b7e50: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b7e50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b7e54: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b7e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b7e58: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b7e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b7e5c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b7e5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b7e60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7e64: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2b7e64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b7e68: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b7e68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7e6c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b7e6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b7e70: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7E78u;
}
