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

// Function: entry_002651cc
// Address: 0x2651cc - 0x265258
void entry_002651cc_0x2651cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002651cc_0x2651cc");
#endif

    switch (ctx->pc) {
        case 0x265218u: goto label_265218;
        case 0x26523cu: goto label_26523c;
        default: break;
    }

    ctx->pc = 0x2651ccu;

label_2651cc:
    // 0x2651cc: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2651ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2651d0:
    // 0x2651d0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2651d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2651d4:
    // 0x2651d4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2651d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2651d8:
    // 0x2651d8: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
label_2651dc:
    if (ctx->pc == 0x2651DCu) {
        ctx->pc = 0x2651E0u;
        goto label_2651e0;
    }
    ctx->pc = 0x2651D8u;
    {
        const bool branch_taken_0x2651d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2651d8) {
            ctx->pc = 0x2652E0u;
            return;
        }
    }
    ctx->pc = 0x2651E0u;
label_2651e0:
    // 0x2651e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2651e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2651e4:
    // 0x2651e4: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x2651e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6728)));
label_2651e8:
    // 0x2651e8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2651e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_2651ec:
    // 0x2651ec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2651ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2651f0:
    // 0x2651f0: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
label_2651f4:
    if (ctx->pc == 0x2651F4u) {
        ctx->pc = 0x2651F8u;
        goto label_2651f8;
    }
    ctx->pc = 0x2651F0u;
    {
        const bool branch_taken_0x2651f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2651f0) {
            ctx->pc = 0x2652C4u;
            return;
        }
    }
    ctx->pc = 0x2651F8u;
label_2651f8:
    // 0x2651f8: 0x8e031338  lw          $v1, 0x1338($s0)
    ctx->pc = 0x2651f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
label_2651fc:
    // 0x2651fc: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2651fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_265200:
    // 0x265200: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
label_265204:
    if (ctx->pc == 0x265204u) {
        ctx->pc = 0x265208u;
        goto label_265208;
    }
    ctx->pc = 0x265200u;
    {
        const bool branch_taken_0x265200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x265200) {
            ctx->pc = 0x2652E0u;
            return;
        }
    }
    ctx->pc = 0x265208u;
label_265208:
    // 0x265208: 0x26040170  addiu       $a0, $s0, 0x170
    ctx->pc = 0x265208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
label_26520c:
    // 0x26520c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x26520cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_265210:
    // 0x265210: 0xc040c9e  jal         func_103278
label_265214:
    if (ctx->pc == 0x265214u) {
        ctx->pc = 0x265218u;
        goto label_265218;
    }
    ctx->pc = 0x265210u;
    SET_GPR_U32(ctx, 31, 0x265218u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x265218u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x265218u) { return; }
    ctx->pc = 0x265218u;
label_265218:
    // 0x265218: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x265218u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_26521c:
    // 0x26521c: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x26521cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
label_265220:
    // 0x265220: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x265220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_265224:
    // 0x265224: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x265224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_265228:
    // 0x265228: 0x2442ba10  addiu       $v0, $v0, -0x45F0
    ctx->pc = 0x265228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949392));
label_26522c:
    // 0x26522c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26522cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_265230:
    // 0x265230: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x265230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_265234:
    // 0x265234: 0x40f809  jalr        $v0
label_265238:
    if (ctx->pc == 0x265238u) {
        ctx->pc = 0x26523Cu;
        goto label_26523c;
    }
    ctx->pc = 0x265234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26523Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265234u, 0x26523Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26523Cu;
label_26523c:
    // 0x26523c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26523cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_265240:
    // 0x265240: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x265240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_265244:
    // 0x265244: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_265248:
    if (ctx->pc == 0x265248u) {
        ctx->pc = 0x26524Cu;
        goto label_26524c;
    }
    ctx->pc = 0x265244u;
    {
        const bool branch_taken_0x265244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265244) {
            ctx->pc = 0x265258u;
            return;
        }
    }
    ctx->pc = 0x26524Cu;
label_26524c:
    // 0x26524c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x26524cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_265250:
    // 0x265250: 0xc097a68  jal         func_25E9A0
label_265254:
    if (ctx->pc == 0x265254u) {
        ctx->pc = 0x265258u;
        goto label_fallthrough_0x265250;
    }
    ctx->pc = 0x265250u;
    SET_GPR_U32(ctx, 31, 0x265258u);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x265250u, 0x265258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x265250:
    ctx->pc = 0x265258u;
}
