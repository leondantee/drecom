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

// Function: e2d_id19_type00
// Address: 0x2b2a80 - 0x2b2ba8
void e2d_id19_type00_0x2b2a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id19_type00_0x2b2a80");
#endif

    switch (ctx->pc) {
        case 0x2b2a9cu: goto label_2b2a9c;
        default: break;
    }

    ctx->pc = 0x2b2a80u;

    // 0x2b2a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b2a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b2a84: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b2a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b2a88: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b2a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b2a8c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2a90: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x2b2a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x2b2a94: 0xc0c9bf0  jal         func_326FC0
    ctx->pc = 0x2B2A94u;
    SET_GPR_U32(ctx, 31, 0x2B2A9Cu);
    ctx->pc = 0x326FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326FC0u, 0x2B2A94u, 0x2B2A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2A9Cu;
label_2b2a9c:
    // 0x2b2a9c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b2a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b2aa0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b2aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2aa4: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b2aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b2aa8: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2b2aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2b2aac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b2aacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2ab0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b2ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2ab4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b2ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b2ab8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b2ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b2abc: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b2abcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b2ac0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b2ac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b2ac4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b2ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b2ac8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b2ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b2acc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b2accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b2ad0: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b2ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b2ad4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b2ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b2ad8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b2ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b2adc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b2adcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b2ae0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b2ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b2ae4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b2ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b2ae8: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b2ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b2aec: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b2aecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b2af0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b2af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b2af4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b2af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b2af8: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b2af8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b2afc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b2afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b2b00: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b2b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b2b04: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b2b04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b2b08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b2b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2b0c: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2b2b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b2b10: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b2b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b2b14: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b2b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2b18: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b2b18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b2b1c: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x2b2b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x2b2b20: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2b2b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2b2b24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b2b24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2b28: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b2b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2b2c: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x2b2b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x2b2b30: 0x240400fa  addiu       $a0, $zero, 0xFA
    ctx->pc = 0x2b2b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x2b2b34: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b2b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2b38: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b2b38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b2b3c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b2b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b2b40: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b2b40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b2b44: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b2b44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b2b48: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b2b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b2b4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b2b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b2b50: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b2b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b2b54: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b2b54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b2b58: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b2b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b2b5c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b2b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b2b60: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b2b60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b2b64: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b2b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b2b68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b2b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b2b6c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b2b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b2b70: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b2b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b2b74: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b2b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b2b78: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b2b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b2b7c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b2b7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b2b80: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b2b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b2b84: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b2b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b2b88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b2b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b2b8c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b2b8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b2b90: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b2b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2b94: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b2b94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b2b98: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b2b98u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2b9c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b2b9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b2ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2BA8u;
}
