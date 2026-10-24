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

// Function: e2d_id51_type00
// Address: 0x2b6700 - 0x2b67dc
void e2d_id51_type00_0x2b6700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id51_type00_0x2b6700");
#endif

    switch (ctx->pc) {
        case 0x2b6734u: goto label_2b6734;
        default: break;
    }

    ctx->pc = 0x2b6700u;

    // 0x2b6700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b6700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b6704: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b6704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b6708: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b6708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b670c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b670cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b6710: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b6710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6714: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2b6714u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b6718: 0x3c02bf4c  lui         $v0, 0xBF4C
    ctx->pc = 0x2b6718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48972 << 16));
    // 0x2b671c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2b671cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2b6720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b6720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6724: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b6724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6728: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x2b6728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x2b672c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B672Cu;
    SET_GPR_U32(ctx, 31, 0x2B6734u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B672Cu, 0x2B6734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6734u;
label_2b6734:
    // 0x2b6734: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b6734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b6738: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b6738u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b673c: 0x0  nop
    ctx->pc = 0x2b673cu;
    // NOP
    // 0x2b6740: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b6740u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b6744: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2b6744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2b6748: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b674c: 0x0  nop
    ctx->pc = 0x2b674cu;
    // NOP
    // 0x2b6750: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b6750u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b6754: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b6754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6758: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b6758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b675c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b675cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b6760: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b6760u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b6764: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b6764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b6768: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b6768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b676c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b676cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b6770: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b6770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b6774: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b6774u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b6778: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b6778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b677c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b677cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b6780: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b6780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b6784: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b6784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b6788: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b6788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b678c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b678cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b6790: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b6790u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b6794: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b6794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b6798: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b6798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b679c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b679cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b67a0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b67a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b67a4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b67a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b67a8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b67a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b67ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b67acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b67b0: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2b67b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b67b4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2b67b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b67b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b67b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b67bc: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2b67bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b67c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b67c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b67c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b67c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b67c8: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2b67c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b67cc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b67ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b67d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b67d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b67d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B67D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B67D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B67DCu;
}
