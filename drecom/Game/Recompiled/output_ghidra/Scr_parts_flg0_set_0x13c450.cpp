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

// Function: Scr_parts_flg0_set
// Address: 0x13c450 - 0x13c580
void Scr_parts_flg0_set_0x13c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_parts_flg0_set_0x13c450");
#endif

    switch (ctx->pc) {
        case 0x13c4d8u: goto label_13c4d8;
        case 0x13c50cu: goto label_13c50c;
        case 0x13c520u: goto label_13c520;
        case 0x13c530u: goto label_13c530;
        default: break;
    }

    ctx->pc = 0x13c450u;

    // 0x13c450: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x13c450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x13c454: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x13c454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x13c458: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x13c458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x13c45c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x13c45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x13c460: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13c460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x13c464: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13c464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13c468: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13c468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13c46c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13c46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13c470: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13c470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13c474: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13c474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13c478: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c47c: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x13c47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x13c480: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x13c480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13c484: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x13c484u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x13c488: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x13c488u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13c48c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x13c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13c490: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x13c490u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x13c494: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x13c494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13c498: 0x8c7e005c  lw          $fp, 0x5C($v1)
    ctx->pc = 0x13c498u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x13c49c: 0x8fd70004  lw          $s7, 0x4($fp)
    ctx->pc = 0x13c49cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x13c4a0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x13c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x13c4a4: 0x24640ae8  addiu       $a0, $v1, 0xAE8
    ctx->pc = 0x13c4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x13c4a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13c4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x13c4ac: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x13c4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x13c4b0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x13c4b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x13c4b4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x13c4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x13c4b8: 0x24650ae8  addiu       $a1, $v1, 0xAE8
    ctx->pc = 0x13c4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x13c4bc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x13c4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x13c4c0: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x13c4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x13c4c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13c4c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13c4c8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x13c4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x13c4cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13c4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13c4d0: 0x8c320ae8  lw          $s2, 0xAE8($at)
    ctx->pc = 0x13c4d0u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x13c4d4: 0x0  nop
    ctx->pc = 0x13c4d4u;
    // NOP
label_13c4d8:
    // 0x13c4d8: 0x8e1100a0  lw          $s1, 0xA0($s0)
    ctx->pc = 0x13c4d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x13c4dc: 0x8e330008  lw          $s3, 0x8($s1)
    ctx->pc = 0x13c4dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x13c4e0: 0x8e34000c  lw          $s4, 0xC($s1)
    ctx->pc = 0x13c4e0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x13c4e4: 0x32634000  andi        $v1, $s3, 0x4000
    ctx->pc = 0x13c4e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16384);
    // 0x13c4e8: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x13C4E8u;
    {
        const bool branch_taken_0x13c4e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c4e8) {
            ctx->pc = 0x13C538u;
            goto label_13c538;
        }
    }
    ctx->pc = 0x13C4F0u;
    // 0x13c4f0: 0x329500ff  andi        $s5, $s4, 0xFF
    ctx->pc = 0x13c4f0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x13c4f4: 0x16a00010  bnez        $s5, . + 4 + (0x10 << 2)
    ctx->pc = 0x13C4F4u;
    {
        const bool branch_taken_0x13c4f4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c4f4) {
            ctx->pc = 0x13C538u;
            goto label_13c538;
        }
    }
    ctx->pc = 0x13C4FCu;
    // 0x13c4fc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x13c4fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13c500: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x13c500u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x13c504: 0xc04f790  jal         func_13DE40
    ctx->pc = 0x13C504u;
    SET_GPR_U32(ctx, 31, 0x13C50Cu);
    ctx->pc = 0x13DE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DE40u, 0x13C504u, 0x13C50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C50Cu;
label_13c50c:
    // 0x13c50c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x13c50cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13c510: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x13c510u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13c514: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13c514u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13c518: 0xc04f744  jal         func_13DD10
    ctx->pc = 0x13C518u;
    SET_GPR_U32(ctx, 31, 0x13C520u);
    ctx->pc = 0x13DD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD10u, 0x13C518u, 0x13C520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C520u;
label_13c520:
    // 0x13c520: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x13c520u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13c524: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13c524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c528: 0xc04f744  jal         func_13DD10
    ctx->pc = 0x13C528u;
    SET_GPR_U32(ctx, 31, 0x13C530u);
    ctx->pc = 0x13DD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD10u, 0x13C528u, 0x13C530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C530u;
label_13c530:
    // 0x13c530: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13c530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13c534: 0xa2030101  sb          $v1, 0x101($s0)
    ctx->pc = 0x13c534u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 257), (uint8_t)GPR_U32(ctx, 3));
label_13c538:
    // 0x13c538: 0x26100120  addiu       $s0, $s0, 0x120
    ctx->pc = 0x13c538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x13c53c: 0x26f70040  addiu       $s7, $s7, 0x40
    ctx->pc = 0x13c53cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 64));
    // 0x13c540: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x13c540u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x13c544: 0x16c0ffe4  bnez        $s6, . + 4 + (-0x1C << 2)
    ctx->pc = 0x13C544u;
    {
        const bool branch_taken_0x13c544 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c544) {
            ctx->pc = 0x13C4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c4d8;
        }
    }
    ctx->pc = 0x13C54Cu;
    // 0x13c54c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x13c54cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13c550: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x13c550u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13c554: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x13c554u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13c558: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13c558u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13c55c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13c55cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c560: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13c560u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c564: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13c564u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c568: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13c568u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c56c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13c56cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c570: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c574: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x13c574u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x13c578: 0x3e00008  jr          $ra
    ctx->pc = 0x13C578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C580u;
}
