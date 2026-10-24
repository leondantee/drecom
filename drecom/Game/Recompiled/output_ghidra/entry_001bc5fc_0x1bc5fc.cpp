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

// Function: entry_001bc5fc
// Address: 0x1bc5fc - 0x1bc66c
void entry_001bc5fc_0x1bc5fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc5fc_0x1bc5fc");
#endif

    switch (ctx->pc) {
        case 0x1bc638u: goto label_1bc638;
        default: break;
    }

    ctx->pc = 0x1bc5fcu;

    // 0x1bc5fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bc5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bc600: 0x8c241a64  lw          $a0, 0x1A64($at)
    ctx->pc = 0x1bc600u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1bc604: 0x34820100  ori         $v0, $a0, 0x100
    ctx->pc = 0x1bc604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x1bc608: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bc608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bc60c: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1bc60cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1bc610: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bc610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc614: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x1bc614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bc618: 0x3c070400  lui         $a3, 0x400
    ctx->pc = 0x1bc618u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1024 << 16));
    // 0x1bc61c: 0xc74025  or          $t0, $a2, $a3
    ctx->pc = 0x1bc61cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1bc620: 0xaca80008  sw          $t0, 0x8($a1)
    ctx->pc = 0x1bc620u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
    // 0x1bc624: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bc624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc628: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bc628u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bc62c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bc62cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bc630: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BC630u;
    SET_GPR_U32(ctx, 31, 0x1BC638u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BC630u, 0x1BC638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC638u;
label_1bc638:
    // 0x1bc638: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bc638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc63c: 0x8c421b64  lw          $v0, 0x1B64($v0)
    ctx->pc = 0x1bc63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
    // 0x1bc640: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BC640u;
    {
        const bool branch_taken_0x1bc640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc640) {
            ctx->pc = 0x1BC66Cu;
            return;
        }
    }
    ctx->pc = 0x1BC648u;
    // 0x1bc648: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc64c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc650: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1bc650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1bc654: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1bc654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1bc658: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bc658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc65c: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1bc65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x1bc660: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x1bc660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x1bc664: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1BC664u;
    SET_GPR_U32(ctx, 31, 0x1BC66Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1BC66Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BC66Cu) { return; }
    ctx->pc = 0x1BC66Cu;
}
