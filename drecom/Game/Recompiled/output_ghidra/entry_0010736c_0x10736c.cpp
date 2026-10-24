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

// Function: entry_0010736c
// Address: 0x10736c - 0x1073bc
void entry_0010736c_0x10736c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010736c_0x10736c");
#endif

    switch (ctx->pc) {
        case 0x1073b0u: goto label_1073b0;
        default: break;
    }

    ctx->pc = 0x10736cu;

    // 0x10736c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x10736cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x107370: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x107370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x107374: 0xae05449c  sw          $a1, 0x449C($s0)
    ctx->pc = 0x107374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17564), GPR_U32(ctx, 5));
    // 0x107378: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x107378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10737c: 0x2242025  or          $a0, $s1, $a0
    ctx->pc = 0x10737cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x107380: 0x8e504498  lw          $s0, 0x4498($s2)
    ctx->pc = 0x107380u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17560)));
    // 0x107384: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x107384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x107388: 0x41f02  srl         $v1, $a0, 28
    ctx->pc = 0x107388u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 28));
    // 0x10738c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x10738cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x107390: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x107390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x107394: 0x26823a70  addiu       $v0, $s4, 0x3A70
    ctx->pc = 0x107394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 14960));
    // 0x107398: 0xb12823  subu        $a1, $a1, $s1
    ctx->pc = 0x107398u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x10739c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10739cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1073a0: 0xb08006  srlv        $s0, $s0, $a1
    ctx->pc = 0x1073a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 5) & 0x1F));
    // 0x1073a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1073a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1073a8: 0xc041b70  jal         func_106DC0
    ctx->pc = 0x1073A8u;
    SET_GPR_U32(ctx, 31, 0x1073B0u);
    ctx->pc = 0x1073ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1073A8u;
    // 0x1073ac: 0xae623c24  sw          $v0, 0x3C24($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 15396), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106DC0u, 0x1073A8u, 0x1073B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1073B0u;
label_1073b0:
    // 0x1073b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1073b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1073b4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1073b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1073b8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1073b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->pc = 0x1073bcu;
}
