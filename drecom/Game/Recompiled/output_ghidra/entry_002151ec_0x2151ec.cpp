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

// Function: entry_002151ec
// Address: 0x2151ec - 0x215248
void entry_002151ec_0x2151ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002151ec_0x2151ec");
#endif

    switch (ctx->pc) {
        case 0x2151ecu: goto label_2151ec;
        case 0x2151f0u: goto label_2151f0;
        case 0x2151f4u: goto label_2151f4;
        case 0x2151f8u: goto label_2151f8;
        case 0x2151fcu: goto label_2151fc;
        case 0x215200u: goto label_215200;
        case 0x215204u: goto label_215204;
        case 0x215208u: goto label_215208;
        case 0x21520cu: goto label_21520c;
        case 0x215210u: goto label_215210;
        case 0x215214u: goto label_215214;
        case 0x215218u: goto label_215218;
        case 0x21521cu: goto label_21521c;
        case 0x215220u: goto label_215220;
        case 0x215224u: goto label_215224;
        case 0x215228u: goto label_215228;
        case 0x21522cu: goto label_21522c;
        case 0x215230u: goto label_215230;
        case 0x215234u: goto label_215234;
        case 0x215238u: goto label_215238;
        case 0x21523cu: goto label_21523c;
        case 0x215240u: goto label_215240;
        case 0x215244u: goto label_215244;
        default: break;
    }

    ctx->pc = 0x2151ecu;

label_2151ec:
    // 0x2151ec: 0xc084b84  jal         func_212E10
label_2151f0:
    if (ctx->pc == 0x2151F0u) {
        ctx->pc = 0x2151F4u;
        goto label_2151f4;
    }
    ctx->pc = 0x2151ECu;
    SET_GPR_U32(ctx, 31, 0x2151F4u);
    ctx->pc = 0x212E10u;
    {
        ctx->pc = 0x2151F4u;
        ps2_stubs::isceSifSetDChain(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2151F4u) { return; }
    ctx->pc = 0x2151F4u;
label_2151f4:
    // 0x2151f4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2151f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2151f8:
    // 0x2151f8: 0x4610013  bgez        $v1, . + 4 + (0x13 << 2)
label_2151fc:
    if (ctx->pc == 0x2151FCu) {
        ctx->pc = 0x215200u;
        goto label_215200;
    }
    ctx->pc = 0x2151F8u;
    {
        const bool branch_taken_0x2151f8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2151f8) {
            ctx->pc = 0x215248u;
            return;
        }
    }
    ctx->pc = 0x215200u;
label_215200:
    // 0x215200: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x215200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_215204:
    // 0x215204: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x215204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_215208:
    // 0x215208: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x215208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_21520c:
    // 0x21520c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x21520cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_215210:
    // 0x215210: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x215210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_215214:
    // 0x215214: 0xa4202a  slt         $a0, $a1, $a0
    ctx->pc = 0x215214u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_215218:
    // 0x215218: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_21521c:
    if (ctx->pc == 0x21521Cu) {
        ctx->pc = 0x21521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215218u;
        // 0x21521c: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215220u;
        goto label_215220;
    }
    ctx->pc = 0x215218u;
    {
        const bool branch_taken_0x215218 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215218u;
        // 0x21521c: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215218) {
            ctx->pc = 0x21527Cu;
            return;
        }
    }
    ctx->pc = 0x215220u;
label_215220:
    // 0x215220: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x215220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_215224:
    // 0x215224: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x215224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_215228:
    // 0x215228: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x215228u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21522c:
    // 0x21522c: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
label_215230:
    if (ctx->pc == 0x215230u) {
        ctx->pc = 0x215234u;
        goto label_215234;
    }
    ctx->pc = 0x21522Cu;
    {
        const bool branch_taken_0x21522c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x21522c) {
            ctx->pc = 0x21527Cu;
            return;
        }
    }
    ctx->pc = 0x215234u;
label_215234:
    // 0x215234: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x215234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_215238:
    // 0x215238: 0xc0f809  jalr        $a2
label_21523c:
    if (ctx->pc == 0x21523Cu) {
        ctx->pc = 0x21523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215238u;
        // 0x21523c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215240u;
        goto label_215240;
    }
    ctx->pc = 0x215238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x215240u);
        ctx->pc = 0x21523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215238u;
        // 0x21523c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215238u, 0x215240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x215240u;
label_215240:
    // 0x215240: 0x1000000e  b           . + 4 + (0xE << 2)
label_215244:
    if (ctx->pc == 0x215244u) {
        ctx->pc = 0x215248u;
        goto label_fallthrough_0x215240;
    }
    ctx->pc = 0x215240u;
    {
        const bool branch_taken_0x215240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215240) {
            ctx->pc = 0x21527Cu;
            return;
        }
    }
label_fallthrough_0x215240:
    ctx->pc = 0x215248u;
}
