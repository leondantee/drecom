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

// Function: entry_00290488
// Address: 0x290488 - 0x2905a0
void entry_00290488_0x290488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00290488_0x290488");
#endif

    ctx->pc = 0x290488u;

label_290488:
    // 0x290488: 0xc6016620  lwc1        $f1, 0x6620($s0)
    ctx->pc = 0x290488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29048c:
    // 0x29048c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x29048cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_290490:
    // 0x290490: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x290490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_290494:
    // 0x290494: 0x0  nop
    ctx->pc = 0x290494u;
    // NOP
label_290498:
    // 0x290498: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x290498u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29049c:
    // 0x29049c: 0x0  nop
    ctx->pc = 0x29049cu;
    // NOP
label_2904a0:
    // 0x2904a0: 0x45000107  bc1f        . + 4 + (0x107 << 2)
label_2904a4:
    if (ctx->pc == 0x2904A4u) {
        ctx->pc = 0x2904A8u;
        goto label_2904a8;
    }
    ctx->pc = 0x2904A0u;
    {
        const bool branch_taken_0x2904a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2904a0) {
            ctx->pc = 0x2908C0u;
            return;
        }
    }
    ctx->pc = 0x2904A8u;
label_2904a8:
    // 0x2904a8: 0x82025de9  lb          $v0, 0x5DE9($s0)
    ctx->pc = 0x2904a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24041)));
label_2904ac:
    // 0x2904ac: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x2904acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
label_2904b0:
    // 0x2904b0: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x2904b0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_2904b4:
    // 0x2904b4: 0x14c00102  bnez        $a2, . + 4 + (0x102 << 2)
label_2904b8:
    if (ctx->pc == 0x2904B8u) {
        ctx->pc = 0x2904BCu;
        goto label_2904bc;
    }
    ctx->pc = 0x2904B4u;
    {
        const bool branch_taken_0x2904b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2904b4) {
            ctx->pc = 0x2908C0u;
            return;
        }
    }
    ctx->pc = 0x2904BCu;
label_2904bc:
    // 0x2904bc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2904bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2904c0:
    // 0x2904c0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2904c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_2904c4:
    // 0x2904c4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2904c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2904c8:
    // 0x2904c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2904c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2904cc:
    // 0x2904cc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2904ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2904d0:
    // 0x2904d0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2904d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2904d4:
    // 0x2904d4: 0x23200  sll         $a2, $v0, 8
    ctx->pc = 0x2904d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_2904d8:
    // 0x2904d8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2904d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2904dc:
    // 0x2904dc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2904dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_2904e0:
    // 0x2904e0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2904e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2904e4:
    // 0x2904e4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2904e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2904e8:
    // 0x2904e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2904e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2904ec:
    // 0x2904ec: 0x3043ff00  andi        $v1, $v0, 0xFF00
    ctx->pc = 0x2904ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
label_2904f0:
    // 0x2904f0: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2904f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_2904f4:
    // 0x2904f4: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x2904f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2904f8:
    // 0x2904f8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2904f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2904fc:
    // 0x2904fc: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2904fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 2));
label_290500:
    // 0x290500: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x290500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_290504:
    // 0x290504: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x290504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_290508:
    // 0x290508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29050c:
    // 0x29050c: 0x146200ec  bne         $v1, $v0, . + 4 + (0xEC << 2)
label_290510:
    if (ctx->pc == 0x290510u) {
        ctx->pc = 0x290514u;
        goto label_290514;
    }
    ctx->pc = 0x29050Cu;
    {
        const bool branch_taken_0x29050c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29050c) {
            ctx->pc = 0x2908C0u;
            return;
        }
    }
    ctx->pc = 0x290514u;
label_290514:
    // 0x290514: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x290514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_290518:
    // 0x290518: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x290518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_29051c:
    // 0x29051c: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x29051cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_290520:
    // 0x290520: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x290520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_290524:
    // 0x290524: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x290524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_290528:
    // 0x290528: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x290528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29052c:
    // 0x29052c: 0x23a00  sll         $a3, $v0, 8
    ctx->pc = 0x29052cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_290530:
    // 0x290530: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x290530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_290534:
    // 0x290534: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x290534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_290538:
    // 0x290538: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x290538u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_29053c:
    // 0x29053c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x29053cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_290540:
    // 0x290540: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x290540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_290544:
    // 0x290544: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x290544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
label_290548:
    // 0x290548: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x290548u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_29054c:
    // 0x29054c: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x29054cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_290550:
    // 0x290550: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x290550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_290554:
    // 0x290554: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x290554u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 2));
label_290558:
    // 0x290558: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x290558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29055c:
    // 0x29055c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x29055cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_290560:
    // 0x290560: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x290560u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_290564:
    // 0x290564: 0x0  nop
    ctx->pc = 0x290564u;
    // NOP
label_290568:
    // 0x290568: 0x0  nop
    ctx->pc = 0x290568u;
    // NOP
label_29056c:
    // 0x29056c: 0x1010  mfhi        $v0
    ctx->pc = 0x29056cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_290570:
    // 0x290570: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x290570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_290574:
    // 0x290574: 0x8fa600fc  lw          $a2, 0xFC($sp)
    ctx->pc = 0x290574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_290578:
    // 0x290578: 0x2cc10006  sltiu       $at, $a2, 0x6
    ctx->pc = 0x290578u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_29057c:
    // 0x29057c: 0x102000c6  beqz        $at, . + 4 + (0xC6 << 2)
label_290580:
    if (ctx->pc == 0x290580u) {
        ctx->pc = 0x290584u;
        goto label_290584;
    }
    ctx->pc = 0x29057Cu;
    {
        const bool branch_taken_0x29057c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29057c) {
            ctx->pc = 0x290898u;
            return;
        }
    }
    ctx->pc = 0x290584u;
label_290584:
    // 0x290584: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x290584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_290588:
    // 0x290588: 0x24621760  addiu       $v0, $v1, 0x1760
    ctx->pc = 0x290588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 5984));
label_29058c:
    // 0x29058c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x29058cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_290590:
    // 0x290590: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x290590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_290594:
    // 0x290594: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x290594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_290598:
    // 0x290598: 0x400008  jr          $v0
label_29059c:
    if (ctx->pc == 0x29059Cu) {
        ctx->pc = 0x2905A0u;
        goto label_fallthrough_0x290598;
    }
    ctx->pc = 0x290598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290598u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x290598:
    ctx->pc = 0x2905A0u;
}
