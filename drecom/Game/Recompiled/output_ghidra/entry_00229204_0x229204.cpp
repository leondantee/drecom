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

// Function: entry_00229204
// Address: 0x229204 - 0x229284
void entry_00229204_0x229204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00229204_0x229204");
#endif

    switch (ctx->pc) {
        case 0x229224u: goto label_229224;
        case 0x229248u: goto label_229248;
        case 0x22927cu: goto label_22927c;
        default: break;
    }

    ctx->pc = 0x229204u;

    // 0x229204: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229208: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x229208u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x22920c: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x22920cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x229210: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x229210u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x229214: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x229214u;
    {
        const bool branch_taken_0x229214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229214) {
            ctx->pc = 0x2292ACu;
            return;
        }
    }
    ctx->pc = 0x22921Cu;
    // 0x22921c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22921Cu;
    SET_GPR_U32(ctx, 31, 0x229224u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22921Cu, 0x229224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229224u;
label_229224:
    // 0x229224: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x229224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x229228: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x229228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x22922c: 0x2462003c  addiu       $v0, $v1, 0x3C
    ctx->pc = 0x22922cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x229230: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x229230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x229234: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x229234u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x229238: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22923c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x22923cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x229240: 0xc067694  jal         func_19DA50
    ctx->pc = 0x229240u;
    SET_GPR_U32(ctx, 31, 0x229248u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x229240u, 0x229248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229248u;
label_229248:
    // 0x229248: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x229248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22924c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x22924cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x229250: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x229250u;
    {
        const bool branch_taken_0x229250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x229250) {
            ctx->pc = 0x229284u;
            return;
        }
    }
    ctx->pc = 0x229258u;
    // 0x229258: 0x3c05469c  lui         $a1, 0x469C
    ctx->pc = 0x229258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18076 << 16));
    // 0x22925c: 0x34a44000  ori         $a0, $a1, 0x4000
    ctx->pc = 0x22925cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x229260: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x229260u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x229264: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229268: 0x24040520  addiu       $a0, $zero, 0x520
    ctx->pc = 0x229268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1312));
    // 0x22926c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x22926cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x229270: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x229270u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x229274: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x229274u;
    SET_GPR_U32(ctx, 31, 0x22927Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x229274u, 0x22927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22927Cu;
label_22927c:
    // 0x22927c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x22927Cu;
    {
        const bool branch_taken_0x22927c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22927c) {
            ctx->pc = 0x2292ACu;
            return;
        }
    }
    ctx->pc = 0x229284u;
}
