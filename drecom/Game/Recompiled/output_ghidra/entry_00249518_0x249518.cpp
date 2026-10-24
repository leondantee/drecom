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

// Function: entry_00249518
// Address: 0x249518 - 0x249578
void entry_00249518_0x249518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249518_0x249518");
#endif

    ctx->pc = 0x249518u;

label_249518:
    // 0x249518: 0x3c033e06  lui         $v1, 0x3E06
    ctx->pc = 0x249518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15878 << 16));
label_24951c:
    // 0x24951c: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x24951cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
label_249520:
    // 0x249520: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x249520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_249524:
    // 0x249524: 0x0  nop
    ctx->pc = 0x249524u;
    // NOP
label_249528:
    // 0x249528: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x249528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_24952c:
    // 0x24952c: 0x3c043d49  lui         $a0, 0x3D49
    ctx->pc = 0x24952cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15689 << 16));
label_249530:
    // 0x249530: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x249530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_249534:
    // 0x249534: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x249534u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_249538:
    // 0x249538: 0x0  nop
    ctx->pc = 0x249538u;
    // NOP
label_24953c:
    // 0x24953c: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x24953cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_249540:
    // 0x249540: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x249540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249544:
    // 0x249544: 0x90a30029  lbu         $v1, 0x29($a1)
    ctx->pc = 0x249544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 41)));
label_249548:
    // 0x249548: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x249548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_24954c:
    // 0x24954c: 0x2c810009  sltiu       $at, $a0, 0x9
    ctx->pc = 0x24954cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_249550:
    // 0x249550: 0x10200585  beqz        $at, . + 4 + (0x585 << 2)
label_249554:
    if (ctx->pc == 0x249554u) {
        ctx->pc = 0x249558u;
        goto label_249558;
    }
    ctx->pc = 0x249550u;
    {
        const bool branch_taken_0x249550 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x249550) {
            ctx->pc = 0x24AB68u;
            return;
        }
    }
    ctx->pc = 0x249558u;
label_249558:
    // 0x249558: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x249558u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
label_24955c:
    // 0x24955c: 0x24c51290  addiu       $a1, $a2, 0x1290
    ctx->pc = 0x24955cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4752));
label_249560:
    // 0x249560: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x249560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_249564:
    // 0x249564: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x249564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_249568:
    // 0x249568: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x249568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24956c:
    // 0x24956c: 0x600008  jr          $v1
label_249570:
    if (ctx->pc == 0x249570u) {
        ctx->pc = 0x249574u;
        goto label_249574;
    }
    ctx->pc = 0x24956Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24956Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x249574u;
label_249574:
    // 0x249574: 0x0  nop
    ctx->pc = 0x249574u;
    // NOP
    ctx->pc = 0x249578u;
}
