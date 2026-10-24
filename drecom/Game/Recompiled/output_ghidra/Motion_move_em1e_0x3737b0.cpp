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

// Function: Motion_move_em1e
// Address: 0x3737b0 - 0x3738e8
void Motion_move_em1e_0x3737b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Motion_move_em1e_0x3737b0");
#endif

    switch (ctx->pc) {
        case 0x3737c8u: goto label_3737c8;
        default: break;
    }

    ctx->pc = 0x3737b0u;

    // 0x3737b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3737b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3737b4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3737b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x3737b8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3737b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x3737bc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3737bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3737c0: 0xc0dcb58  jal         func_372D60
    ctx->pc = 0x3737C0u;
    SET_GPR_U32(ctx, 31, 0x3737C8u);
    ctx->pc = 0x372D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372D60u, 0x3737C0u, 0x3737C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3737C8u;
label_3737c8:
    // 0x3737c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3737c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3737cc: 0xa04009e7  sb          $zero, 0x9E7($v0)
    ctx->pc = 0x3737ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2535), (uint8_t)GPR_U32(ctx, 0));
    // 0x3737d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3737d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3737d4: 0x8c4205f8  lw          $v0, 0x5F8($v0)
    ctx->pc = 0x3737d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1528)));
    // 0x3737d8: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x3737D8u;
    {
        const bool branch_taken_0x3737d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3737d8) {
            ctx->pc = 0x3738CCu;
            goto label_3738cc;
        }
    }
    ctx->pc = 0x3737E0u;
    // 0x3737e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3737e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3737e4: 0x944209e0  lhu         $v0, 0x9E0($v0)
    ctx->pc = 0x3737e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
    // 0x3737e8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3737e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3737ec: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3737ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3737f0: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3737F0u;
    {
        const bool branch_taken_0x3737f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3737f0) {
            ctx->pc = 0x3738A4u;
            goto label_3738a4;
        }
    }
    ctx->pc = 0x3737F8u;
    // 0x3737f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3737f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3737fc: 0x94620a00  lhu         $v0, 0xA00($v1)
    ctx->pc = 0x3737fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2560)));
    // 0x373800: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x373800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x373804: 0xa4620a00  sh          $v0, 0xA00($v1)
    ctx->pc = 0x373804u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2560), (uint16_t)GPR_U32(ctx, 2));
    // 0x373808: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x373808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37380c: 0x94420a00  lhu         $v0, 0xA00($v0)
    ctx->pc = 0x37380cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x373810: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x373810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x373814: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x373814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x373818: 0x94420a02  lhu         $v0, 0xA02($v0)
    ctx->pc = 0x373818u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2562)));
    // 0x37381c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x37381cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x373820: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x373820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x373824: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x373824u;
    {
        const bool branch_taken_0x373824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x373824) {
            ctx->pc = 0x373840u;
            goto label_373840;
        }
    }
    ctx->pc = 0x37382Cu;
    // 0x37382c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x37382cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x373830: 0xa4400a00  sh          $zero, 0xA00($v0)
    ctx->pc = 0x373830u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2560), (uint16_t)GPR_U32(ctx, 0));
    // 0x373834: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x373834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373838: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x373838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37383c: 0xa04309e7  sb          $v1, 0x9E7($v0)
    ctx->pc = 0x37383cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2535), (uint8_t)GPR_U32(ctx, 3));
label_373840:
    // 0x373840: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x373840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x373844: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x373844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x373848: 0x246309d8  addiu       $v1, $v1, 0x9D8
    ctx->pc = 0x373848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2520));
    // 0x37384c: 0x244209dc  addiu       $v0, $v0, 0x9DC
    ctx->pc = 0x37384cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2524));
    // 0x373850: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x373850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373854: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x373854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x373858: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x373858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37385c: 0x94420a00  lhu         $v0, 0xA00($v0)
    ctx->pc = 0x37385cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x373860: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x373860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x373864: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x373864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x373868: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x373868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37386c: 0x8c4205f8  lw          $v0, 0x5F8($v0)
    ctx->pc = 0x37386cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1528)));
    // 0x373870: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x373870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373874: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x373874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x373878: 0x244209d8  addiu       $v0, $v0, 0x9D8
    ctx->pc = 0x373878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2520));
    // 0x37387c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x37387cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373880: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x373880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x373884: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x373884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x373888: 0x944209d8  lhu         $v0, 0x9D8($v0)
    ctx->pc = 0x373888u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2520)));
    // 0x37388c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x37388cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x373890: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x373890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x373894: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x373894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x373898: 0xac4309f8  sw          $v1, 0x9F8($v0)
    ctx->pc = 0x373898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2552), GPR_U32(ctx, 3));
    // 0x37389c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x37389Cu;
    {
        const bool branch_taken_0x37389c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37389c) {
            ctx->pc = 0x3738CCu;
            goto label_3738cc;
        }
    }
    ctx->pc = 0x3738A4u;
label_3738a4:
    // 0x3738a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3738a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3738a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3738a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3738ac: 0x246309d8  addiu       $v1, $v1, 0x9D8
    ctx->pc = 0x3738acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2520));
    // 0x3738b0: 0x244209dc  addiu       $v0, $v0, 0x9DC
    ctx->pc = 0x3738b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2524));
    // 0x3738b4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3738b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3738b8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3738b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3738bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3738bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3738c0: 0x906209da  lbu         $v0, 0x9DA($v1)
    ctx->pc = 0x3738c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2522)));
    // 0x3738c4: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x3738c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x3738c8: 0xa06209da  sb          $v0, 0x9DA($v1)
    ctx->pc = 0x3738c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2522), (uint8_t)GPR_U32(ctx, 2));
label_3738cc:
    // 0x3738cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3738ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3738d0: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x3738d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x3738d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3738d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3738d8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3738d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3738dc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3738dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3738e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3738E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3738E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3738E8u;
}
