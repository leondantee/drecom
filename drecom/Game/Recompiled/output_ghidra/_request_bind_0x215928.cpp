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

// Function: _request_bind
// Address: 0x215928 - 0x2159d8
void _request_bind_0x215928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_request_bind_0x215928");
#endif

    switch (ctx->pc) {
        case 0x21594cu: goto label_21594c;
        case 0x215978u: goto label_215978;
        default: break;
    }

    ctx->pc = 0x215928u;

    // 0x215928: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x215928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21592c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x21592cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x215930: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215934: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x215934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215938: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x215938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21593c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21593cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x215940: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x215940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x215944: 0xc08557e  jal         func_2155F8
    ctx->pc = 0x215944u;
    SET_GPR_U32(ctx, 31, 0x21594Cu);
    ctx->pc = 0x215948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215944u;
    // 0x215948: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2155F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2155F8u, 0x215944u, 0x21594Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21594Cu;
label_21594c:
    // 0x21594c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21594cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215950: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x215950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x215954: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x215954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x215958: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x215958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x21595c: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x21595cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x215960: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x215960u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
    // 0x215964: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x215964u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x215968: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x215968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21596c: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x21596cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x215970: 0xc085636  jal         func_2158D8
    ctx->pc = 0x215970u;
    SET_GPR_U32(ctx, 31, 0x215978u);
    ctx->pc = 0x215974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215970u;
    // 0x215974: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2158D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2158D8u, 0x215970u, 0x215978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215978u;
label_215978:
    // 0x215978: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x215978u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21597c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21597Cu;
    {
        const bool branch_taken_0x21597c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21597c) {
            ctx->pc = 0x215980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21597Cu;
            // 0x215980: 0xae430024  sw          $v1, 0x24($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215994u;
            goto label_215994;
        }
    }
    ctx->pc = 0x215984u;
    // 0x215984: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x215984u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x215988: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x215988u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x21598c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21598Cu;
    {
        const bool branch_taken_0x21598c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21598Cu;
        // 0x215990: 0xae40002c  sw          $zero, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21598c) {
            ctx->pc = 0x2159A4u;
            goto label_2159a4;
        }
    }
    ctx->pc = 0x215994u;
label_215994:
    // 0x215994: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x215994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x215998: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x215998u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x21599c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x21599cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2159a0: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x2159a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
label_2159a4:
    // 0x2159a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2159a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2159a8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2159a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2159ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2159acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2159b0: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x2159b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x2159b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2159b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2159b8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2159b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2159bc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2159bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2159c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2159c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2159c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2159c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2159c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2159c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2159cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2159ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2159d0: 0x808544e  j           func_215138
    ctx->pc = 0x2159D0u;
    ctx->pc = 0x2159D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2159D0u;
    // 0x2159d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215138u;
    isceSifSendCmd_0x215138(rdram, ctx, runtime); return;
    ctx->pc = 0x2159D8u;
}
