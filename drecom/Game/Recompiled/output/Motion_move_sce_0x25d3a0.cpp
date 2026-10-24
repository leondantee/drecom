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

// Function: Motion_move_sce
// Address: 0x25d3a0 - 0x25d4c0
void Motion_move_sce_0x25d3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Motion_move_sce_0x25d3a0");
#endif

    switch (ctx->pc) {
        case 0x25d3c8u: goto label_25d3c8;
        case 0x25d4a4u: goto label_25d4a4;
        default: break;
    }

    ctx->pc = 0x25d3a0u;

    // 0x25d3a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25d3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25d3a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x25d3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x25d3a8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x25d3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x25d3ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x25d3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d3b0: 0x946209e0  lhu         $v0, 0x9E0($v1)
    ctx->pc = 0x25d3b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x25d3b4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x25d3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x25d3b8: 0xa46209e0  sh          $v0, 0x9E0($v1)
    ctx->pc = 0x25d3b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2528), (uint16_t)GPR_U32(ctx, 2));
    // 0x25d3bc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x25d3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d3c0: 0xc096d08  jal         func_25B420
    ctx->pc = 0x25D3C0u;
    SET_GPR_U32(ctx, 31, 0x25D3C8u);
    ctx->pc = 0x25B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B420u, 0x25D3C0u, 0x25D3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D3C8u;
label_25d3c8:
    // 0x25d3c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d3cc: 0xa04009e7  sb          $zero, 0x9E7($v0)
    ctx->pc = 0x25d3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2535), (uint8_t)GPR_U32(ctx, 0));
    // 0x25d3d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d3d4: 0x944209e0  lhu         $v0, 0x9E0($v0)
    ctx->pc = 0x25d3d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
    // 0x25d3d8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25d3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25d3dc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x25d3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x25d3e0: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x25D3E0u;
    {
        const bool branch_taken_0x25d3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d3e0) {
            ctx->pc = 0x25D498u;
            goto label_25d498;
        }
    }
    ctx->pc = 0x25D3E8u;
    // 0x25d3e8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d3ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x25d3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d3f0: 0x8c8309f8  lw          $v1, 0x9F8($a0)
    ctx->pc = 0x25d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2552)));
    // 0x25d3f4: 0x8c4209f4  lw          $v0, 0x9F4($v0)
    ctx->pc = 0x25d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2548)));
    // 0x25d3f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25d3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25d3fc: 0xac8209f8  sw          $v0, 0x9F8($a0)
    ctx->pc = 0x25d3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2552), GPR_U32(ctx, 2));
    // 0x25d400: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d404: 0x944209e0  lhu         $v0, 0x9E0($v0)
    ctx->pc = 0x25d404u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
    // 0x25d408: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25d408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25d40c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x25d40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x25d410: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x25D410u;
    {
        const bool branch_taken_0x25d410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d410) {
            ctx->pc = 0x25D460u;
            goto label_25d460;
        }
    }
    ctx->pc = 0x25D418u;
    // 0x25d418: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d41c: 0x8c4309f8  lw          $v1, 0x9F8($v0)
    ctx->pc = 0x25d41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2552)));
    // 0x25d420: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d424: 0x8c4209fc  lw          $v0, 0x9FC($v0)
    ctx->pc = 0x25d424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2556)));
    // 0x25d428: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x25d428u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25d42c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x25D42Cu;
    {
        const bool branch_taken_0x25d42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d42c) {
            ctx->pc = 0x25D498u;
            goto label_25d498;
        }
    }
    ctx->pc = 0x25D434u;
    // 0x25d434: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d438: 0x8c4409fc  lw          $a0, 0x9FC($v0)
    ctx->pc = 0x25d438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2556)));
    // 0x25d43c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x25d43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d440: 0x8c6209f8  lw          $v0, 0x9F8($v1)
    ctx->pc = 0x25d440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2552)));
    // 0x25d444: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x25d444u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25d448: 0xac6209f8  sw          $v0, 0x9F8($v1)
    ctx->pc = 0x25d448u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2552), GPR_U32(ctx, 2));
    // 0x25d44c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25d44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25d450: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d454: 0xa04309e7  sb          $v1, 0x9E7($v0)
    ctx->pc = 0x25d454u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2535), (uint8_t)GPR_U32(ctx, 3));
    // 0x25d458: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x25D458u;
    {
        const bool branch_taken_0x25d458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d458) {
            ctx->pc = 0x25D498u;
            goto label_25d498;
        }
    }
    ctx->pc = 0x25D460u;
label_25d460:
    // 0x25d460: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d464: 0x8c4309f8  lw          $v1, 0x9F8($v0)
    ctx->pc = 0x25d464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2552)));
    // 0x25d468: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d46c: 0x8c4209fc  lw          $v0, 0x9FC($v0)
    ctx->pc = 0x25d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2556)));
    // 0x25d470: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x25d470u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25d474: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x25D474u;
    {
        const bool branch_taken_0x25d474 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d474) {
            ctx->pc = 0x25D498u;
            goto label_25d498;
        }
    }
    ctx->pc = 0x25D47Cu;
    // 0x25d47c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d480: 0x8c4309fc  lw          $v1, 0x9FC($v0)
    ctx->pc = 0x25d480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2556)));
    // 0x25d484: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d488: 0xac4309f8  sw          $v1, 0x9F8($v0)
    ctx->pc = 0x25d488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2552), GPR_U32(ctx, 3));
    // 0x25d48c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25d48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25d490: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d494: 0xa04309e7  sb          $v1, 0x9E7($v0)
    ctx->pc = 0x25d494u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2535), (uint8_t)GPR_U32(ctx, 3));
label_25d498:
    // 0x25d498: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x25d498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d49c: 0xc097c6c  jal         func_25F1B0
    ctx->pc = 0x25D49Cu;
    SET_GPR_U32(ctx, 31, 0x25D4A4u);
    ctx->pc = 0x25F1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F1B0u, 0x25D49Cu, 0x25D4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D4A4u;
label_25d4a4:
    // 0x25d4a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d4a8: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x25d4a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x25d4ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25d4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25d4b0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x25d4b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d4b4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25d4b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25d4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x25D4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D4C0u;
}
