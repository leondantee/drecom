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

// Function: Get_sequence
// Address: 0x25e700 - 0x25e824
void Get_sequence_0x25e700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_sequence_0x25e700");
#endif

    ctx->pc = 0x25e700u;

    // 0x25e700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25e700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25e704: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x25e704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x25e708: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x25e708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e70c: 0xa04009e7  sb          $zero, 0x9E7($v0)
    ctx->pc = 0x25e70cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2535), (uint8_t)GPR_U32(ctx, 0));
    // 0x25e710: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x25e710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e714: 0x8c4205f8  lw          $v0, 0x5F8($v0)
    ctx->pc = 0x25e714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1528)));
    // 0x25e718: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x25E718u;
    {
        const bool branch_taken_0x25e718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e718) {
            ctx->pc = 0x25E80Cu;
            goto label_25e80c;
        }
    }
    ctx->pc = 0x25E720u;
    // 0x25e720: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x25e720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e724: 0x944209e0  lhu         $v0, 0x9E0($v0)
    ctx->pc = 0x25e724u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
    // 0x25e728: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25e728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25e72c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x25e72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x25e730: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x25E730u;
    {
        const bool branch_taken_0x25e730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e730) {
            ctx->pc = 0x25E7E4u;
            goto label_25e7e4;
        }
    }
    ctx->pc = 0x25E738u;
    // 0x25e738: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e73c: 0x94620a00  lhu         $v0, 0xA00($v1)
    ctx->pc = 0x25e73cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2560)));
    // 0x25e740: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25e740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25e744: 0xa4620a00  sh          $v0, 0xA00($v1)
    ctx->pc = 0x25e744u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2560), (uint16_t)GPR_U32(ctx, 2));
    // 0x25e748: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x25e748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e74c: 0x94420a00  lhu         $v0, 0xA00($v0)
    ctx->pc = 0x25e74cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x25e750: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x25e750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25e754: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x25e754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e758: 0x94420a02  lhu         $v0, 0xA02($v0)
    ctx->pc = 0x25e758u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2562)));
    // 0x25e75c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25e75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25e760: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x25e760u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25e764: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25E764u;
    {
        const bool branch_taken_0x25e764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e764) {
            ctx->pc = 0x25E780u;
            goto label_25e780;
        }
    }
    ctx->pc = 0x25E76Cu;
    // 0x25e76c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x25e76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e770: 0xa4400a00  sh          $zero, 0xA00($v0)
    ctx->pc = 0x25e770u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2560), (uint16_t)GPR_U32(ctx, 0));
    // 0x25e774: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25e774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25e778: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x25e778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e77c: 0xa04309e7  sb          $v1, 0x9E7($v0)
    ctx->pc = 0x25e77cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2535), (uint8_t)GPR_U32(ctx, 3));
label_25e780:
    // 0x25e780: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e784: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x25e784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e788: 0x246309d8  addiu       $v1, $v1, 0x9D8
    ctx->pc = 0x25e788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2520));
    // 0x25e78c: 0x244209dc  addiu       $v0, $v0, 0x9DC
    ctx->pc = 0x25e78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2524));
    // 0x25e790: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25e790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e794: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25e794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25e798: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x25e798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e79c: 0x94420a00  lhu         $v0, 0xA00($v0)
    ctx->pc = 0x25e79cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x25e7a0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25e7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25e7a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x25e7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25e7a8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x25e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e7ac: 0x8c4205f8  lw          $v0, 0x5F8($v0)
    ctx->pc = 0x25e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1528)));
    // 0x25e7b0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x25e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25e7b4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x25e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e7b8: 0x244209d8  addiu       $v0, $v0, 0x9D8
    ctx->pc = 0x25e7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2520));
    // 0x25e7bc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25e7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e7c0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25e7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25e7c4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x25e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e7c8: 0x944209d8  lhu         $v0, 0x9D8($v0)
    ctx->pc = 0x25e7c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2520)));
    // 0x25e7cc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25e7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25e7d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x25e7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25e7d4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x25e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e7d8: 0xac4309f8  sw          $v1, 0x9F8($v0)
    ctx->pc = 0x25e7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2552), GPR_U32(ctx, 3));
    // 0x25e7dc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25E7DCu;
    {
        const bool branch_taken_0x25e7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e7dc) {
            ctx->pc = 0x25E80Cu;
            goto label_25e80c;
        }
    }
    ctx->pc = 0x25E7E4u;
label_25e7e4:
    // 0x25e7e4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e7e8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x25e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e7ec: 0x246309d8  addiu       $v1, $v1, 0x9D8
    ctx->pc = 0x25e7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2520));
    // 0x25e7f0: 0x244209dc  addiu       $v0, $v0, 0x9DC
    ctx->pc = 0x25e7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2524));
    // 0x25e7f4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25e7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e7f8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25e7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25e7fc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e800: 0x906209da  lbu         $v0, 0x9DA($v1)
    ctx->pc = 0x25e800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2522)));
    // 0x25e804: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x25e804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x25e808: 0xa06209da  sb          $v0, 0x9DA($v1)
    ctx->pc = 0x25e808u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2522), (uint8_t)GPR_U32(ctx, 2));
label_25e80c:
    // 0x25e80c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x25e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e810: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x25e810u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x25e814: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e818: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x25e818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25e81c: 0x3e00008  jr          $ra
    ctx->pc = 0x25E81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E824u;
}
