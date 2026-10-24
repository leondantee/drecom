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

// Function: e2d_id28_type02
// Address: 0x2b3d70 - 0x2b3e4c
void e2d_id28_type02_0x2b3d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id28_type02_0x2b3d70");
#endif

    switch (ctx->pc) {
        case 0x2b3d8cu: goto label_2b3d8c;
        case 0x2b3db0u: goto label_2b3db0;
        default: break;
    }

    ctx->pc = 0x2b3d70u;

    // 0x2b3d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3d74: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b3d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b3d78: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b3d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b3d7c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3d80: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x2b3d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x2b3d84: 0xc0c9bf0  jal         func_326FC0
    ctx->pc = 0x2B3D84u;
    SET_GPR_U32(ctx, 31, 0x2B3D8Cu);
    ctx->pc = 0x326FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326FC0u, 0x2B3D84u, 0x2B3D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3D8Cu;
label_2b3d8c:
    // 0x2b3d8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b3d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b3d90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3d94: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2b3d94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b3d98: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x2b3d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x2b3d9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3da0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3da4: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x2b3da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x2b3da8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B3DA8u;
    SET_GPR_U32(ctx, 31, 0x2B3DB0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B3DA8u, 0x2B3DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3DB0u;
label_2b3db0:
    // 0x2b3db0: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b3db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b3db4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b3db4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b3db8: 0x0  nop
    ctx->pc = 0x2b3db8u;
    // NOP
    // 0x2b3dbc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b3dbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b3dc0: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2b3dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2b3dc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3dc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3dc8: 0x0  nop
    ctx->pc = 0x2b3dc8u;
    // NOP
    // 0x2b3dcc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b3dccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b3dd0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3dd4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b3dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b3dd8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b3dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b3ddc: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b3ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b3de0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b3de0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b3de4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b3de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b3de8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b3de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b3dec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b3decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b3df0: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b3df0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b3df4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b3df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b3df8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b3df8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b3dfc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b3dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b3e00: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b3e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b3e04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b3e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b3e08: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b3e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b3e0c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b3e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b3e10: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b3e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b3e14: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b3e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b3e18: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b3e18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b3e1c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b3e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b3e20: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b3e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b3e24: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b3e24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b3e28: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3e2c: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2b3e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b3e30: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b3e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b3e34: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3e38: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2b3e38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b3e3c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b3e3cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3e40: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b3e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b3e44: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3E4Cu;
}
