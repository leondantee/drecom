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

// Function: entry_00254634
// Address: 0x254634 - 0x254694
void entry_00254634_0x254634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00254634_0x254634");
#endif

    ctx->pc = 0x254634u;

    // 0x254634: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x254634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x254638: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x254638u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x25463c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x25463cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x254640: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x254640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x254644: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x254644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x254648: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x254648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25464c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x25464cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x254650: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x254650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x254654: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x254654u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x254658: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x254658u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25465c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25465cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x254660: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x254660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x254664: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x254664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x254668: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x254668u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x25466c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x25466cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x254670: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x254670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x254674: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x254674u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x254678: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x254678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25467c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x25467cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x254680: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x254680u;
    {
        const bool branch_taken_0x254680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x254680) {
            ctx->pc = 0x254694u;
            return;
        }
    }
    ctx->pc = 0x254688u;
    // 0x254688: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x254688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25468c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x25468cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x254690: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x254690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    ctx->pc = 0x254694u;
}
