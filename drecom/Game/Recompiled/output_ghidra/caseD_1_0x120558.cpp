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

// Function: caseD_1
// Address: 0x120558 - 0x120680
void caseD_1_0x120558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x120558");
#endif

    ctx->pc = 0x120558u;

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
            return;
        }
    }
    ctx->pc = 0x120680u;
}
