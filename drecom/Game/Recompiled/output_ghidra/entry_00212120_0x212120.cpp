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

// Function: entry_00212120
// Address: 0x212120 - 0x2121e8
void entry_00212120_0x212120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00212120_0x212120");
#endif

    ctx->pc = 0x212120u;

label_212120:
    // 0x212120: 0x2e230020  sltiu       $v1, $s1, 0x20
    ctx->pc = 0x212120u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_212124:
    // 0x212124: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_212128:
    if (ctx->pc == 0x212128u) {
        ctx->pc = 0x21212Cu;
        goto label_21212c;
    }
    ctx->pc = 0x212124u;
    {
        const bool branch_taken_0x212124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x212124) {
            ctx->pc = 0x2120DCu;
            return;
        }
    }
    ctx->pc = 0x21212Cu;
label_21212c:
    // 0x21212c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x21212cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_212130:
    // 0x212130: 0x8c241a40  lw          $a0, 0x1A40($at)
    ctx->pc = 0x212130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6720)));
label_212134:
    // 0x212134: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x212134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_212138:
    // 0x212138: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x212138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_21213c:
    // 0x21213c: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
label_212140:
    if (ctx->pc == 0x212140u) {
        ctx->pc = 0x212144u;
        goto label_212144;
    }
    ctx->pc = 0x21213Cu;
    {
        const bool branch_taken_0x21213c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21213c) {
            ctx->pc = 0x2121F8u;
            return;
        }
    }
    ctx->pc = 0x212144u;
label_212144:
    // 0x212144: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x212144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_212148:
    // 0x212148: 0x8c220068  lw          $v0, 0x68($at)
    ctx->pc = 0x212148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 104)));
label_21214c:
    // 0x21214c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x21214cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_212150:
    // 0x212150: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x212150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_212154:
    // 0x212154: 0x2442aa90  addiu       $v0, $v0, -0x5570
    ctx->pc = 0x212154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945424));
label_212158:
    // 0x212158: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x212158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21215c:
    // 0x21215c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21215cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_212160:
    // 0x212160: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_212164:
    if (ctx->pc == 0x212164u) {
        ctx->pc = 0x212168u;
        goto label_212168;
    }
    ctx->pc = 0x212160u;
    {
        const bool branch_taken_0x212160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212160) {
            ctx->pc = 0x2121E8u;
            return;
        }
    }
    ctx->pc = 0x212168u;
label_212168:
    // 0x212168: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x212168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_21216c:
    // 0x21216c: 0x8c220068  lw          $v0, 0x68($at)
    ctx->pc = 0x21216cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 104)));
label_212170:
    // 0x212170: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x212170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_212174:
    // 0x212174: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x212174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_212178:
    // 0x212178: 0x2442aa90  addiu       $v0, $v0, -0x5570
    ctx->pc = 0x212178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945424));
label_21217c:
    // 0x21217c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x21217cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_212180:
    // 0x212180: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x212180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_212184:
    // 0x212184: 0x8c22006c  lw          $v0, 0x6C($at)
    ctx->pc = 0x212184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 108)));
label_212188:
    // 0x212188: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x212188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_21218c:
    // 0x21218c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21218cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_212190:
    // 0x212190: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x212190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_212194:
    // 0x212194: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x212194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_212198:
    // 0x212198: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x212198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21219c:
    // 0x21219c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21219cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2121a0:
    // 0x2121a0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2121a4:
    if (ctx->pc == 0x2121A4u) {
        ctx->pc = 0x2121A8u;
        goto label_2121a8;
    }
    ctx->pc = 0x2121A0u;
    {
        const bool branch_taken_0x2121a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2121a0) {
            ctx->pc = 0x2121E8u;
            return;
        }
    }
    ctx->pc = 0x2121A8u;
label_2121a8:
    // 0x2121a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2121a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2121ac:
    // 0x2121ac: 0x8c220068  lw          $v0, 0x68($at)
    ctx->pc = 0x2121acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 104)));
label_2121b0:
    // 0x2121b0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2121b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2121b4:
    // 0x2121b4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2121b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2121b8:
    // 0x2121b8: 0x2442aa90  addiu       $v0, $v0, -0x5570
    ctx->pc = 0x2121b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945424));
label_2121bc:
    // 0x2121bc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2121bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2121c0:
    // 0x2121c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2121c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2121c4:
    // 0x2121c4: 0x8c22006c  lw          $v0, 0x6C($at)
    ctx->pc = 0x2121c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 108)));
label_2121c8:
    // 0x2121c8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2121c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2121cc:
    // 0x2121cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2121ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2121d0:
    // 0x2121d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2121d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2121d4:
    // 0x2121d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2121d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2121d8:
    // 0x2121d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2121d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2121dc:
    // 0x2121dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2121dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2121e0:
    // 0x2121e0: 0x40f809  jalr        $v0
label_2121e4:
    if (ctx->pc == 0x2121E4u) {
        ctx->pc = 0x2121E8u;
        goto label_fallthrough_0x2121e0;
    }
    ctx->pc = 0x2121E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2121E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2121E0u, 0x2121E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x2121e0:
    ctx->pc = 0x2121E8u;
}
