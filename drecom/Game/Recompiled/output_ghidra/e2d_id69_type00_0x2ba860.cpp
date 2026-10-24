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

// Function: e2d_id69_type00
// Address: 0x2ba860 - 0x2ba960
void e2d_id69_type00_0x2ba860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id69_type00_0x2ba860");
#endif

    switch (ctx->pc) {
        case 0x2ba8b4u: goto label_2ba8b4;
        default: break;
    }

    ctx->pc = 0x2ba860u;

    // 0x2ba860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ba860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ba864: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2ba864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2ba868: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2ba868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2ba86c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2ba86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2ba870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ba870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba874: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ba874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba878: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2ba878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2ba87c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2ba87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2ba880: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ba880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba884: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ba884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba888: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2ba888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2ba88c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2ba88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2ba890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ba890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba894: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ba894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba898: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2ba898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2ba89c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2ba89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2ba8a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ba8a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba8a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ba8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba8a8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2ba8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2ba8ac: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BA8ACu;
    SET_GPR_U32(ctx, 31, 0x2BA8B4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BA8ACu, 0x2BA8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA8B4u;
label_2ba8b4:
    // 0x2ba8b4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2ba8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2ba8b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ba8b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ba8bc: 0x0  nop
    ctx->pc = 0x2ba8bcu;
    // NOP
    // 0x2ba8c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ba8c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ba8c4: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x2ba8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x2ba8c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba8c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba8cc: 0x0  nop
    ctx->pc = 0x2ba8ccu;
    // NOP
    // 0x2ba8d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ba8d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ba8d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ba8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba8d8: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2ba8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2ba8dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ba8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ba8e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ba8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba8e4: 0xa064013f  sb          $a0, 0x13F($v1)
    ctx->pc = 0x2ba8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 319), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ba8e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2ba8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2ba8ec: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x2ba8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x2ba8f0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ba8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ba8f4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ba8f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ba8f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ba8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba8fc: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2ba8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ba900: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2ba900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2ba904: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x2ba904u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x2ba908: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ba908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ba90c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BA90Cu;
    {
        const bool branch_taken_0x2ba90c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba90c) {
            ctx->pc = 0x2BA924u;
            goto label_2ba924;
        }
    }
    ctx->pc = 0x2BA914u;
    // 0x2ba914: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ba914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba918: 0xa060011a  sb          $zero, 0x11A($v1)
    ctx->pc = 0x2ba918u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ba91c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BA91Cu;
    {
        const bool branch_taken_0x2ba91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba91c) {
            ctx->pc = 0x2BA930u;
            goto label_2ba930;
        }
    }
    ctx->pc = 0x2BA924u;
label_2ba924:
    // 0x2ba924: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ba924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ba928: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ba928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba92c: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2ba92cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
label_2ba930:
    // 0x2ba930: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ba930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ba934: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ba934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba938: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2ba938u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ba93c: 0x3c033ed7  lui         $v1, 0x3ED7
    ctx->pc = 0x2ba93cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16087 << 16));
    // 0x2ba940: 0x34630a3d  ori         $v1, $v1, 0xA3D
    ctx->pc = 0x2ba940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2621);
    // 0x2ba944: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba944u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba948: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ba948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba94c: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x2ba94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x2ba950: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2ba950u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba954: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ba954u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ba958: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA960u;
}
