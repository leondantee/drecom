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

// Function: entry_001fb1f8
// Address: 0x1fb1f8 - 0x1fb250
void entry_001fb1f8_0x1fb1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb1f8_0x1fb1f8");
#endif

    switch (ctx->pc) {
        case 0x1fb228u: goto label_1fb228;
        default: break;
    }

    ctx->pc = 0x1fb1f8u;

    // 0x1fb1f8: 0x12600081  beqz        $s3, . + 4 + (0x81 << 2)
    ctx->pc = 0x1FB1F8u;
    {
        const bool branch_taken_0x1fb1f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb1f8) {
            ctx->pc = 0x1FB400u;
            return;
        }
    }
    ctx->pc = 0x1FB200u;
    // 0x1fb200: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb204: 0x90830344  lbu         $v1, 0x344($a0)
    ctx->pc = 0x1fb204u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x1fb208: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1fb208u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb20c: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1fb20cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1fb210: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb214: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1fb214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fb218: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fb218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fb21c: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1fb21cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb220: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FB220u;
    SET_GPR_U32(ctx, 31, 0x1FB228u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FB220u, 0x1FB228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB228u;
label_1fb228:
    // 0x1fb228: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1fb228u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fb22c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb230: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fb230u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fb234: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB234u;
    {
        const bool branch_taken_0x1fb234 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1fb234) {
            ctx->pc = 0x1FB250u;
            return;
        }
    }
    ctx->pc = 0x1FB23Cu;
    // 0x1fb23c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fb23cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb240: 0x0  nop
    ctx->pc = 0x1fb240u;
    // NOP
    // 0x1fb244: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fb244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fb248: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FB248u;
    {
        const bool branch_taken_0x1fb248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb248) {
            ctx->pc = 0x1FB26Cu;
            return;
        }
    }
    ctx->pc = 0x1FB250u;
}
