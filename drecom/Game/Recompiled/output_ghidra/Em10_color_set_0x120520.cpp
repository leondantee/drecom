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

// Function: Em10_color_set
// Address: 0x120520 - 0x120b0c
void Em10_color_set_0x120520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_color_set_0x120520");
#endif

    ctx->pc = 0x120520u;

    // 0x120520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x120520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x120524: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x120524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x120528: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x120528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x12052c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x12052cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x120530: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x120530u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x120534: 0x10200172  beqz        $at, . + 4 + (0x172 << 2)
    ctx->pc = 0x120534u;
    {
        const bool branch_taken_0x120534 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x120534) {
            ctx->pc = 0x120B00u;
            goto label_120b00;
        }
    }
    ctx->pc = 0x12053Cu;
    // 0x12053c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x12053cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x120540: 0x2463e130  addiu       $v1, $v1, -0x1ED0
    ctx->pc = 0x120540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959408));
    // 0x120544: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x120544u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x120548: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x120548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x12054c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x12054cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120550: 0x600008  jr          $v1
    ctx->pc = 0x120550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x120558u: goto label_120558;
            case 0x120680u: goto label_120680;
            case 0x120790u: goto label_120790;
            case 0x1208B8u: goto label_1208b8;
            case 0x1209E0u: goto label_1209e0;
            case 0x120B00u: goto label_120b00;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120550u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x120558u;
label_120558:
    // 0x120558: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x120558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x12055c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12055cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120560: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120564: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x120564u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
    // 0x120568: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x12056c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12056cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120570: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120574: 0xac640064  sw          $a0, 0x64($v1)
    ctx->pc = 0x120574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 4));
    // 0x120578: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x12057c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12057cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120580: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120584: 0xac640068  sw          $a0, 0x68($v1)
    ctx->pc = 0x120584u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 4));
    // 0x120588: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x120588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x12058c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12058cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120590: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120594: 0xac6400f0  sw          $a0, 0xF0($v1)
    ctx->pc = 0x120594u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 4));
    // 0x120598: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x12059c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12059cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1205a0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1205a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1205a4: 0xac6400f4  sw          $a0, 0xF4($v1)
    ctx->pc = 0x1205a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 4));
    // 0x1205a8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1205a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1205ac: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1205acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1205b0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1205b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1205b4: 0xac6400f8  sw          $a0, 0xF8($v1)
    ctx->pc = 0x1205b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 4));
    // 0x1205b8: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x1205b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1205bc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1205bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1205c0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1205c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1205c4: 0xac640330  sw          $a0, 0x330($v1)
    ctx->pc = 0x1205c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 816), GPR_U32(ctx, 4));
    // 0x1205c8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1205c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1205cc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1205ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1205d0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1205d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1205d4: 0xac640334  sw          $a0, 0x334($v1)
    ctx->pc = 0x1205d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 820), GPR_U32(ctx, 4));
    // 0x1205d8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1205d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1205dc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1205dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1205e0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1205e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1205e4: 0xac640338  sw          $a0, 0x338($v1)
    ctx->pc = 0x1205e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 824), GPR_U32(ctx, 4));
    // 0x1205e8: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x1205e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1205ec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1205ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1205f0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1205f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1205f4: 0xac640570  sw          $a0, 0x570($v1)
    ctx->pc = 0x1205f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1392), GPR_U32(ctx, 4));
    // 0x1205f8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1205f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1205fc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1205fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120600: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120604: 0xac640574  sw          $a0, 0x574($v1)
    ctx->pc = 0x120604u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1396), GPR_U32(ctx, 4));
    // 0x120608: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x12060c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12060cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120610: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120614: 0xac640578  sw          $a0, 0x578($v1)
    ctx->pc = 0x120614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1400), GPR_U32(ctx, 4));
    // 0x120618: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x120618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x12061c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12061cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120620: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120624: 0xac6407b0  sw          $a0, 0x7B0($v1)
    ctx->pc = 0x120624u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1968), GPR_U32(ctx, 4));
    // 0x120628: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x12062c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12062cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120630: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120634: 0xac6407b4  sw          $a0, 0x7B4($v1)
    ctx->pc = 0x120634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1972), GPR_U32(ctx, 4));
    // 0x120638: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x12063c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12063cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120640: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120644: 0xac6407b8  sw          $a0, 0x7B8($v1)
    ctx->pc = 0x120644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1976), GPR_U32(ctx, 4));
    // 0x120648: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x120648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x12064c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12064cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120650: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120654: 0xac640840  sw          $a0, 0x840($v1)
    ctx->pc = 0x120654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2112), GPR_U32(ctx, 4));
    // 0x120658: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x12065c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12065cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120660: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120664: 0xac640844  sw          $a0, 0x844($v1)
    ctx->pc = 0x120664u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2116), GPR_U32(ctx, 4));
    // 0x120668: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x12066c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12066cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120670: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120674: 0xac640848  sw          $a0, 0x848($v1)
    ctx->pc = 0x120674u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2120), GPR_U32(ctx, 4));
    // 0x120678: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x120678u;
    {
        const bool branch_taken_0x120678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120678) {
            ctx->pc = 0x120B00u;
            goto label_120b00;
        }
    }
    ctx->pc = 0x120680u;
label_120680:
    // 0x120680: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x120684: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120688: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12068c: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x12068cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
    // 0x120690: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x120694: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120698: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12069c: 0xac640064  sw          $a0, 0x64($v1)
    ctx->pc = 0x12069cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 4));
    // 0x1206a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1206a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1206a4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1206a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1206a8: 0xac600068  sw          $zero, 0x68($v1)
    ctx->pc = 0x1206a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 0));
    // 0x1206ac: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1206acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1206b0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1206b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1206b4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1206b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1206b8: 0xac6400f0  sw          $a0, 0xF0($v1)
    ctx->pc = 0x1206b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 4));
    // 0x1206bc: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1206bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1206c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1206c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1206c4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1206c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1206c8: 0xac6400f4  sw          $a0, 0xF4($v1)
    ctx->pc = 0x1206c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 4));
    // 0x1206cc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1206ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1206d0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1206d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1206d4: 0xac6000f8  sw          $zero, 0xF8($v1)
    ctx->pc = 0x1206d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 0));
    // 0x1206d8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1206d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1206dc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1206dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1206e0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1206e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1206e4: 0xac640330  sw          $a0, 0x330($v1)
    ctx->pc = 0x1206e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 816), GPR_U32(ctx, 4));
    // 0x1206e8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1206e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1206ec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1206ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1206f0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1206f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1206f4: 0xac640334  sw          $a0, 0x334($v1)
    ctx->pc = 0x1206f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 820), GPR_U32(ctx, 4));
    // 0x1206f8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1206f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1206fc: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1206fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120700: 0xac600338  sw          $zero, 0x338($v1)
    ctx->pc = 0x120700u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 824), GPR_U32(ctx, 0));
    // 0x120704: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x120708: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12070c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x12070cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120710: 0xac640570  sw          $a0, 0x570($v1)
    ctx->pc = 0x120710u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1392), GPR_U32(ctx, 4));
    // 0x120714: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x120718: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12071c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x12071cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120720: 0xac640574  sw          $a0, 0x574($v1)
    ctx->pc = 0x120720u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1396), GPR_U32(ctx, 4));
    // 0x120724: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120728: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12072c: 0xac600578  sw          $zero, 0x578($v1)
    ctx->pc = 0x12072cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1400), GPR_U32(ctx, 0));
    // 0x120730: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x120734: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120738: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12073c: 0xac6407b0  sw          $a0, 0x7B0($v1)
    ctx->pc = 0x12073cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1968), GPR_U32(ctx, 4));
    // 0x120740: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x120744: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120748: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12074c: 0xac6407b4  sw          $a0, 0x7B4($v1)
    ctx->pc = 0x12074cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1972), GPR_U32(ctx, 4));
    // 0x120750: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120754: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120758: 0xac6007b8  sw          $zero, 0x7B8($v1)
    ctx->pc = 0x120758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1976), GPR_U32(ctx, 0));
    // 0x12075c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x12075cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x120760: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120764: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120768: 0xac640840  sw          $a0, 0x840($v1)
    ctx->pc = 0x120768u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2112), GPR_U32(ctx, 4));
    // 0x12076c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x12076cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x120770: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120774: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120778: 0xac640844  sw          $a0, 0x844($v1)
    ctx->pc = 0x120778u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2116), GPR_U32(ctx, 4));
    // 0x12077c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12077cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120780: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120784: 0xac600848  sw          $zero, 0x848($v1)
    ctx->pc = 0x120784u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2120), GPR_U32(ctx, 0));
    // 0x120788: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x120788u;
    {
        const bool branch_taken_0x120788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120788) {
            ctx->pc = 0x120B00u;
            goto label_120b00;
        }
    }
    ctx->pc = 0x120790u;
label_120790:
    // 0x120790: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x120794: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120798: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12079c: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x12079cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
    // 0x1207a0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1207a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1207a4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1207a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1207a8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1207a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1207ac: 0xac640064  sw          $a0, 0x64($v1)
    ctx->pc = 0x1207acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 4));
    // 0x1207b0: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1207b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1207b4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1207b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1207b8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1207b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1207bc: 0xac640068  sw          $a0, 0x68($v1)
    ctx->pc = 0x1207bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 4));
    // 0x1207c0: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1207c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1207c4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1207c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1207c8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1207c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1207cc: 0xac6400f0  sw          $a0, 0xF0($v1)
    ctx->pc = 0x1207ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 4));
    // 0x1207d0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1207d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1207d4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1207d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1207d8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1207d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1207dc: 0xac6400f4  sw          $a0, 0xF4($v1)
    ctx->pc = 0x1207dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 4));
    // 0x1207e0: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1207e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1207e4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1207e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1207e8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1207e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1207ec: 0xac6400f8  sw          $a0, 0xF8($v1)
    ctx->pc = 0x1207ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 4));
    // 0x1207f0: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1207f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1207f4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1207f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1207f8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1207f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1207fc: 0xac640330  sw          $a0, 0x330($v1)
    ctx->pc = 0x1207fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 816), GPR_U32(ctx, 4));
    // 0x120800: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x120800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x120804: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120808: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12080c: 0xac640334  sw          $a0, 0x334($v1)
    ctx->pc = 0x12080cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 820), GPR_U32(ctx, 4));
    // 0x120810: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x120814: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120818: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12081c: 0xac640338  sw          $a0, 0x338($v1)
    ctx->pc = 0x12081cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 824), GPR_U32(ctx, 4));
    // 0x120820: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x120824: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120828: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12082c: 0xac640570  sw          $a0, 0x570($v1)
    ctx->pc = 0x12082cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1392), GPR_U32(ctx, 4));
    // 0x120830: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x120830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x120834: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120838: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12083c: 0xac640574  sw          $a0, 0x574($v1)
    ctx->pc = 0x12083cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1396), GPR_U32(ctx, 4));
    // 0x120840: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x120844: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120848: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12084c: 0xac640578  sw          $a0, 0x578($v1)
    ctx->pc = 0x12084cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1400), GPR_U32(ctx, 4));
    // 0x120850: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x120854: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120858: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12085c: 0xac6407b0  sw          $a0, 0x7B0($v1)
    ctx->pc = 0x12085cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1968), GPR_U32(ctx, 4));
    // 0x120860: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x120860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x120864: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120868: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12086c: 0xac6407b4  sw          $a0, 0x7B4($v1)
    ctx->pc = 0x12086cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1972), GPR_U32(ctx, 4));
    // 0x120870: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x120874: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120878: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12087c: 0xac6407b8  sw          $a0, 0x7B8($v1)
    ctx->pc = 0x12087cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1976), GPR_U32(ctx, 4));
    // 0x120880: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x120884: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120888: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12088c: 0xac640840  sw          $a0, 0x840($v1)
    ctx->pc = 0x12088cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2112), GPR_U32(ctx, 4));
    // 0x120890: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x120890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x120894: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120898: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12089c: 0xac640844  sw          $a0, 0x844($v1)
    ctx->pc = 0x12089cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2116), GPR_U32(ctx, 4));
    // 0x1208a0: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1208a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1208a4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1208a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1208a8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1208a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1208ac: 0xac640848  sw          $a0, 0x848($v1)
    ctx->pc = 0x1208acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2120), GPR_U32(ctx, 4));
    // 0x1208b0: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1208B0u;
    {
        const bool branch_taken_0x1208b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1208b0) {
            ctx->pc = 0x120B00u;
            goto label_120b00;
        }
    }
    ctx->pc = 0x1208B8u;
label_1208b8:
    // 0x1208b8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1208b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1208bc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1208bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1208c0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1208c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1208c4: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x1208c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
    // 0x1208c8: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x1208c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1208cc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1208ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1208d0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1208d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1208d4: 0xac640064  sw          $a0, 0x64($v1)
    ctx->pc = 0x1208d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 4));
    // 0x1208d8: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x1208d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1208dc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1208dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1208e0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1208e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1208e4: 0xac640068  sw          $a0, 0x68($v1)
    ctx->pc = 0x1208e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 4));
    // 0x1208e8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1208e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1208ec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1208ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1208f0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1208f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1208f4: 0xac6400f0  sw          $a0, 0xF0($v1)
    ctx->pc = 0x1208f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 4));
    // 0x1208f8: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x1208f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1208fc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1208fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120900: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120904: 0xac6400f4  sw          $a0, 0xF4($v1)
    ctx->pc = 0x120904u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 4));
    // 0x120908: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x12090c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12090cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120910: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120914: 0xac6400f8  sw          $a0, 0xF8($v1)
    ctx->pc = 0x120914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 4));
    // 0x120918: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x120918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12091c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12091cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120920: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120924: 0xac640330  sw          $a0, 0x330($v1)
    ctx->pc = 0x120924u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 816), GPR_U32(ctx, 4));
    // 0x120928: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x12092c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12092cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120930: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120934: 0xac640334  sw          $a0, 0x334($v1)
    ctx->pc = 0x120934u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 820), GPR_U32(ctx, 4));
    // 0x120938: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x12093c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12093cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120940: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120944: 0xac640338  sw          $a0, 0x338($v1)
    ctx->pc = 0x120944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 824), GPR_U32(ctx, 4));
    // 0x120948: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x120948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12094c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12094cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120950: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120954: 0xac640570  sw          $a0, 0x570($v1)
    ctx->pc = 0x120954u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1392), GPR_U32(ctx, 4));
    // 0x120958: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x12095c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12095cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120960: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120964: 0xac640574  sw          $a0, 0x574($v1)
    ctx->pc = 0x120964u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1396), GPR_U32(ctx, 4));
    // 0x120968: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x12096c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12096cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120970: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120974: 0xac640578  sw          $a0, 0x578($v1)
    ctx->pc = 0x120974u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1400), GPR_U32(ctx, 4));
    // 0x120978: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x120978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12097c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12097cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120980: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120984: 0xac6407b0  sw          $a0, 0x7B0($v1)
    ctx->pc = 0x120984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1968), GPR_U32(ctx, 4));
    // 0x120988: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x12098c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12098cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120990: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120994: 0xac6407b4  sw          $a0, 0x7B4($v1)
    ctx->pc = 0x120994u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1972), GPR_U32(ctx, 4));
    // 0x120998: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x12099c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12099cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1209a0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1209a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1209a4: 0xac6407b8  sw          $a0, 0x7B8($v1)
    ctx->pc = 0x1209a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1976), GPR_U32(ctx, 4));
    // 0x1209a8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1209a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1209ac: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1209acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1209b0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1209b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1209b4: 0xac640840  sw          $a0, 0x840($v1)
    ctx->pc = 0x1209b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2112), GPR_U32(ctx, 4));
    // 0x1209b8: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x1209b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1209bc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1209bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1209c0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1209c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1209c4: 0xac640844  sw          $a0, 0x844($v1)
    ctx->pc = 0x1209c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2116), GPR_U32(ctx, 4));
    // 0x1209c8: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x1209c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1209cc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1209ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1209d0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1209d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1209d4: 0xac640848  sw          $a0, 0x848($v1)
    ctx->pc = 0x1209d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2120), GPR_U32(ctx, 4));
    // 0x1209d8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1209D8u;
    {
        const bool branch_taken_0x1209d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1209d8) {
            ctx->pc = 0x120B00u;
            goto label_120b00;
        }
    }
    ctx->pc = 0x1209E0u;
label_1209e0:
    // 0x1209e0: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x1209e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1209e4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1209e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1209e8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1209e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1209ec: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x1209ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
    // 0x1209f0: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x1209f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1209f4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1209f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1209f8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1209f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1209fc: 0xac640064  sw          $a0, 0x64($v1)
    ctx->pc = 0x1209fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 4));
    // 0x120a00: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120a04: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120a08: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120a0c: 0xac640068  sw          $a0, 0x68($v1)
    ctx->pc = 0x120a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 4));
    // 0x120a10: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120a14: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120a18: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120a1c: 0xac6400f0  sw          $a0, 0xF0($v1)
    ctx->pc = 0x120a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 4));
    // 0x120a20: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120a24: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120a28: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120a2c: 0xac6400f4  sw          $a0, 0xF4($v1)
    ctx->pc = 0x120a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 4));
    // 0x120a30: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120a34: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120a38: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120a3c: 0xac6400f8  sw          $a0, 0xF8($v1)
    ctx->pc = 0x120a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 4));
    // 0x120a40: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120a44: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120a48: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120a4c: 0xac640330  sw          $a0, 0x330($v1)
    ctx->pc = 0x120a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 816), GPR_U32(ctx, 4));
    // 0x120a50: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120a54: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120a58: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120a5c: 0xac640334  sw          $a0, 0x334($v1)
    ctx->pc = 0x120a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 820), GPR_U32(ctx, 4));
    // 0x120a60: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120a64: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120a68: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120a6c: 0xac640338  sw          $a0, 0x338($v1)
    ctx->pc = 0x120a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 824), GPR_U32(ctx, 4));
    // 0x120a70: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120a74: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120a78: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120a7c: 0xac640570  sw          $a0, 0x570($v1)
    ctx->pc = 0x120a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1392), GPR_U32(ctx, 4));
    // 0x120a80: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120a84: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120a88: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120a8c: 0xac640574  sw          $a0, 0x574($v1)
    ctx->pc = 0x120a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1396), GPR_U32(ctx, 4));
    // 0x120a90: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120a94: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120a98: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120a9c: 0xac640578  sw          $a0, 0x578($v1)
    ctx->pc = 0x120a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1400), GPR_U32(ctx, 4));
    // 0x120aa0: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120aa4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120aa8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120aac: 0xac6407b0  sw          $a0, 0x7B0($v1)
    ctx->pc = 0x120aacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1968), GPR_U32(ctx, 4));
    // 0x120ab0: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120ab4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120ab8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120abc: 0xac6407b4  sw          $a0, 0x7B4($v1)
    ctx->pc = 0x120abcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1972), GPR_U32(ctx, 4));
    // 0x120ac0: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120ac4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120ac8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120acc: 0xac6407b8  sw          $a0, 0x7B8($v1)
    ctx->pc = 0x120accu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1976), GPR_U32(ctx, 4));
    // 0x120ad0: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120ad4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120ad8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120adc: 0xac640840  sw          $a0, 0x840($v1)
    ctx->pc = 0x120adcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2112), GPR_U32(ctx, 4));
    // 0x120ae0: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120ae4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120ae8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120aec: 0xac640844  sw          $a0, 0x844($v1)
    ctx->pc = 0x120aecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2116), GPR_U32(ctx, 4));
    // 0x120af0: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120af4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120af8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120afc: 0xac640848  sw          $a0, 0x848($v1)
    ctx->pc = 0x120afcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2120), GPR_U32(ctx, 4));
label_120b00:
    // 0x120b00: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x120b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x120b04: 0x3e00008  jr          $ra
    ctx->pc = 0x120B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120B0Cu;
}
