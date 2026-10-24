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

// Function: _PES_packet
// Address: 0x109998 - 0x109f20
void ps2__PES_packet_0x109998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__PES_packet_0x109998");
#endif

    switch (ctx->pc) {
        case 0x1099dcu: goto label_1099dc;
        case 0x1099e8u: goto label_1099e8;
        case 0x1099fcu: goto label_1099fc;
        case 0x109a9cu: goto label_109a9c;
        case 0x109aa8u: goto label_109aa8;
        case 0x109ab8u: goto label_109ab8;
        case 0x109ac4u: goto label_109ac4;
        case 0x109ad4u: goto label_109ad4;
        case 0x109ae4u: goto label_109ae4;
        case 0x109af4u: goto label_109af4;
        case 0x109b04u: goto label_109b04;
        case 0x109b2cu: goto label_109b2c;
        case 0x109b38u: goto label_109b38;
        case 0x109b44u: goto label_109b44;
        case 0x109b50u: goto label_109b50;
        case 0x109b5cu: goto label_109b5c;
        case 0x109b68u: goto label_109b68;
        case 0x109b74u: goto label_109b74;
        case 0x109bb8u: goto label_109bb8;
        case 0x109bc4u: goto label_109bc4;
        case 0x109bd0u: goto label_109bd0;
        case 0x109bdcu: goto label_109bdc;
        case 0x109be8u: goto label_109be8;
        case 0x109bf4u: goto label_109bf4;
        case 0x109c00u: goto label_109c00;
        case 0x109c44u: goto label_109c44;
        case 0x109c60u: goto label_109c60;
        case 0x109c74u: goto label_109c74;
        case 0x109c84u: goto label_109c84;
        case 0x109c94u: goto label_109c94;
        case 0x109ca4u: goto label_109ca4;
        case 0x109cb4u: goto label_109cb4;
        case 0x109cc0u: goto label_109cc0;
        case 0x109cd4u: goto label_109cd4;
        case 0x109ce0u: goto label_109ce0;
        case 0x109cecu: goto label_109cec;
        case 0x109cfcu: goto label_109cfc;
        case 0x109d14u: goto label_109d14;
        case 0x109d24u: goto label_109d24;
        case 0x109d38u: goto label_109d38;
        case 0x109d44u: goto label_109d44;
        case 0x109d58u: goto label_109d58;
        case 0x109d60u: goto label_109d60;
        case 0x109da0u: goto label_109da0;
        case 0x109dd8u: goto label_109dd8;
        case 0x109e00u: goto label_109e00;
        case 0x109e94u: goto label_109e94;
        case 0x109ec0u: goto label_109ec0;
        case 0x109eecu: goto label_109eec;
        default: break;
    }

    ctx->pc = 0x109998u;

    // 0x109998: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x109998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x10999c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x10999cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1099a0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1099a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1099a4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1099a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1099a8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1099a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1099ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1099acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1099b0: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1099b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x1099b4: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1099b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x1099b8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1099b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1099bc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1099bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1099c0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1099c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1099c4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1099c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1099c8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1099c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1099cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1099ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1099d0: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x1099d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1099d4: 0xc04240a  jal         func_109028
    ctx->pc = 0x1099D4u;
    SET_GPR_U32(ctx, 31, 0x1099DCu);
    ctx->pc = 0x1099D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1099D4u;
    // 0x1099d8: 0xae820028  sw          $v0, 0x28($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x1099D4u, 0x1099DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1099DCu;
label_1099dc:
    // 0x1099dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1099dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1099e0: 0xc04240a  jal         func_109028
    ctx->pc = 0x1099E0u;
    SET_GPR_U32(ctx, 31, 0x1099E8u);
    ctx->pc = 0x1099E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1099E0u;
    // 0x1099e4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x1099E0u, 0x1099E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1099E8u;
label_1099e8:
    // 0x1099e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1099e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1099ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1099ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1099f0: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1099f0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x1099f4: 0xc04240a  jal         func_109028
    ctx->pc = 0x1099F4u;
    SET_GPR_U32(ctx, 31, 0x1099FCu);
    ctx->pc = 0x1099F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1099F4u;
    // 0x1099f8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x1099F4u, 0x1099FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1099FCu;
label_1099fc:
    // 0x1099fc: 0xde840000  ld          $a0, 0x0($s4)
    ctx->pc = 0x1099fcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x109a00: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x109a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x109a04: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x109a04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x109a08: 0x3402bc00  ori         $v0, $zero, 0xBC00
    ctx->pc = 0x109a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48128);
    // 0x109a0c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x109a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x109a10: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x109a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109a14: 0xfe830010  sd          $v1, 0x10($s4)
    ctx->pc = 0x109a14u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 3));
    // 0x109a18: 0x10820117  beq         $a0, $v0, . + 4 + (0x117 << 2)
    ctx->pc = 0x109A18u;
    {
        const bool branch_taken_0x109a18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x109A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A18u;
        // 0x109a1c: 0xfe830018  sd          $v1, 0x18($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109a18) {
            ctx->pc = 0x109E78u;
            goto label_109e78;
        }
    }
    ctx->pc = 0x109A20u;
    // 0x109a20: 0x3402be00  ori         $v0, $zero, 0xBE00
    ctx->pc = 0x109a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48640);
    // 0x109a24: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x109a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x109a28: 0x108200f7  beq         $a0, $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x109A28u;
    {
        const bool branch_taken_0x109a28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x109a28) {
            ctx->pc = 0x109E08u;
            goto label_109e08;
        }
    }
    ctx->pc = 0x109A30u;
    // 0x109a30: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x109a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48896);
    // 0x109a34: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x109a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x109a38: 0x108200f3  beq         $a0, $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x109A38u;
    {
        const bool branch_taken_0x109a38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x109a38) {
            ctx->pc = 0x109E08u;
            goto label_109e08;
        }
    }
    ctx->pc = 0x109A40u;
    // 0x109a40: 0x3402f000  ori         $v0, $zero, 0xF000
    ctx->pc = 0x109a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x109a44: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x109a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x109a48: 0x108200ef  beq         $a0, $v0, . + 4 + (0xEF << 2)
    ctx->pc = 0x109A48u;
    {
        const bool branch_taken_0x109a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x109a48) {
            ctx->pc = 0x109E08u;
            goto label_109e08;
        }
    }
    ctx->pc = 0x109A50u;
    // 0x109a50: 0x3402f100  ori         $v0, $zero, 0xF100
    ctx->pc = 0x109a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61696);
    // 0x109a54: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x109a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x109a58: 0x108200eb  beq         $a0, $v0, . + 4 + (0xEB << 2)
    ctx->pc = 0x109A58u;
    {
        const bool branch_taken_0x109a58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x109a58) {
            ctx->pc = 0x109E08u;
            goto label_109e08;
        }
    }
    ctx->pc = 0x109A60u;
    // 0x109a60: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x109a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x109a64: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x109a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x109a68: 0x108200e7  beq         $a0, $v0, . + 4 + (0xE7 << 2)
    ctx->pc = 0x109A68u;
    {
        const bool branch_taken_0x109a68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x109a68) {
            ctx->pc = 0x109E08u;
            goto label_109e08;
        }
    }
    ctx->pc = 0x109A70u;
    // 0x109a70: 0x3402f200  ori         $v0, $zero, 0xF200
    ctx->pc = 0x109a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61952);
    // 0x109a74: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x109a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x109a78: 0x108200e3  beq         $a0, $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x109A78u;
    {
        const bool branch_taken_0x109a78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x109a78) {
            ctx->pc = 0x109E08u;
            goto label_109e08;
        }
    }
    ctx->pc = 0x109A80u;
    // 0x109a80: 0x3402f800  ori         $v0, $zero, 0xF800
    ctx->pc = 0x109a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63488);
    // 0x109a84: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x109a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x109a88: 0x108200df  beq         $a0, $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x109A88u;
    {
        const bool branch_taken_0x109a88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x109a88) {
            ctx->pc = 0x109E08u;
            goto label_109e08;
        }
    }
    ctx->pc = 0x109A90u;
    // 0x109a90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109a94: 0xc04240a  jal         func_109028
    ctx->pc = 0x109A94u;
    SET_GPR_U32(ctx, 31, 0x109A9Cu);
    ctx->pc = 0x109A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109A94u;
    // 0x109a98: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109A94u, 0x109A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109A9Cu;
label_109a9c:
    // 0x109a9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109aa0: 0xc04240a  jal         func_109028
    ctx->pc = 0x109AA0u;
    SET_GPR_U32(ctx, 31, 0x109AA8u);
    ctx->pc = 0x109AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109AA0u;
    // 0x109aa4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109AA0u, 0x109AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109AA8u;
label_109aa8:
    // 0x109aa8: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x109aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x109aac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ab0: 0xc04240a  jal         func_109028
    ctx->pc = 0x109AB0u;
    SET_GPR_U32(ctx, 31, 0x109AB8u);
    ctx->pc = 0x109AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109AB0u;
    // 0x109ab4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109AB0u, 0x109AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109AB8u;
label_109ab8:
    // 0x109ab8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109abc: 0xc04240a  jal         func_109028
    ctx->pc = 0x109ABCu;
    SET_GPR_U32(ctx, 31, 0x109AC4u);
    ctx->pc = 0x109AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109ABCu;
    // 0x109ac0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109ABCu, 0x109AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109AC4u;
label_109ac4:
    // 0x109ac4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x109ac4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ac8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109acc: 0xc04240a  jal         func_109028
    ctx->pc = 0x109ACCu;
    SET_GPR_U32(ctx, 31, 0x109AD4u);
    ctx->pc = 0x109AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109ACCu;
    // 0x109ad0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109ACCu, 0x109AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109AD4u;
label_109ad4:
    // 0x109ad4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x109ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x109ad8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109adc: 0xc04240a  jal         func_109028
    ctx->pc = 0x109ADCu;
    SET_GPR_U32(ctx, 31, 0x109AE4u);
    ctx->pc = 0x109AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109ADCu;
    // 0x109ae0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109ADCu, 0x109AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109AE4u;
label_109ae4:
    // 0x109ae4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x109ae4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ae8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109aec: 0xc04240a  jal         func_109028
    ctx->pc = 0x109AECu;
    SET_GPR_U32(ctx, 31, 0x109AF4u);
    ctx->pc = 0x109AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109AECu;
    // 0x109af0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109AECu, 0x109AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109AF4u;
label_109af4:
    // 0x109af4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x109af4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109af8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109afc: 0xc04240a  jal         func_109028
    ctx->pc = 0x109AFCu;
    SET_GPR_U32(ctx, 31, 0x109B04u);
    ctx->pc = 0x109B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109AFCu;
    // 0x109b00: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109AFCu, 0x109B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B04u;
label_109b04:
    // 0x109b04: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x109b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x109b08: 0x32e30002  andi        $v1, $s7, 0x2
    ctx->pc = 0x109b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)2);
    // 0x109b0c: 0xde620018  ld          $v0, 0x18($s3)
    ctx->pc = 0x109b0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x109b10: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x109b10u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x109b14: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x109b14u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x109b18: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x109B18u;
    {
        const bool branch_taken_0x109b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x109B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B18u;
        // 0x109b1c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b18) {
            ctx->pc = 0x109BA4u;
            goto label_109ba4;
        }
    }
    ctx->pc = 0x109B20u;
    // 0x109b20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b24: 0xc04240a  jal         func_109028
    ctx->pc = 0x109B24u;
    SET_GPR_U32(ctx, 31, 0x109B2Cu);
    ctx->pc = 0x109B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B24u;
    // 0x109b28: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109B24u, 0x109B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B2Cu;
label_109b2c:
    // 0x109b2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b30: 0xc04240a  jal         func_109028
    ctx->pc = 0x109B30u;
    SET_GPR_U32(ctx, 31, 0x109B38u);
    ctx->pc = 0x109B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B30u;
    // 0x109b34: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109B30u, 0x109B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B38u;
label_109b38:
    // 0x109b38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x109b38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b3c: 0xc04241e  jal         func_109078
    ctx->pc = 0x109B3Cu;
    SET_GPR_U32(ctx, 31, 0x109B44u);
    ctx->pc = 0x109B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B3Cu;
    // 0x109b40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109078u, 0x109B3Cu, 0x109B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B44u;
label_109b44:
    // 0x109b44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b48: 0xc04240a  jal         func_109028
    ctx->pc = 0x109B48u;
    SET_GPR_U32(ctx, 31, 0x109B50u);
    ctx->pc = 0x109B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B48u;
    // 0x109b4c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109B48u, 0x109B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B50u;
label_109b50:
    // 0x109b50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x109b50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b54: 0xc04241e  jal         func_109078
    ctx->pc = 0x109B54u;
    SET_GPR_U32(ctx, 31, 0x109B5Cu);
    ctx->pc = 0x109B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B54u;
    // 0x109b58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109078u, 0x109B54u, 0x109B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B5Cu;
label_109b5c:
    // 0x109b5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b60: 0xc04240a  jal         func_109028
    ctx->pc = 0x109B60u;
    SET_GPR_U32(ctx, 31, 0x109B68u);
    ctx->pc = 0x109B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B60u;
    // 0x109b64: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109B60u, 0x109B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B68u;
label_109b68:
    // 0x109b68: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x109b68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b6c: 0xc04241e  jal         func_109078
    ctx->pc = 0x109B6Cu;
    SET_GPR_U32(ctx, 31, 0x109B74u);
    ctx->pc = 0x109B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B6Cu;
    // 0x109b70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109078u, 0x109B6Cu, 0x109B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B74u;
label_109b74:
    // 0x109b74: 0x101780  sll         $v0, $s0, 30
    ctx->pc = 0x109b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 30));
    // 0x109b78: 0x118bc0  sll         $s1, $s1, 15
    ctx->pc = 0x109b78u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 15));
    // 0x109b7c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x109b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x109b80: 0x108082  srl         $s0, $s0, 2
    ctx->pc = 0x109b80u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x109b84: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x109b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x109b88: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x109b88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x109b8c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x109b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x109b90: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x109b90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x109b94: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x109b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x109b98: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x109b98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x109b9c: 0xfe900010  sd          $s0, 0x10($s4)
    ctx->pc = 0x109b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 16));
    // 0x109ba0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x109ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_109ba4:
    // 0x109ba4: 0x16e20022  bne         $s7, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x109BA4u;
    {
        const bool branch_taken_0x109ba4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x109BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109BA4u;
        // 0x109ba8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ba4) {
            ctx->pc = 0x109C30u;
            goto label_109c30;
        }
    }
    ctx->pc = 0x109BACu;
    // 0x109bac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109bb0: 0xc04240a  jal         func_109028
    ctx->pc = 0x109BB0u;
    SET_GPR_U32(ctx, 31, 0x109BB8u);
    ctx->pc = 0x109BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109BB0u;
    // 0x109bb4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109BB0u, 0x109BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109BB8u;
label_109bb8:
    // 0x109bb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109bbc: 0xc04240a  jal         func_109028
    ctx->pc = 0x109BBCu;
    SET_GPR_U32(ctx, 31, 0x109BC4u);
    ctx->pc = 0x109BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109BBCu;
    // 0x109bc0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109BBCu, 0x109BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109BC4u;
label_109bc4:
    // 0x109bc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x109bc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109bc8: 0xc04241e  jal         func_109078
    ctx->pc = 0x109BC8u;
    SET_GPR_U32(ctx, 31, 0x109BD0u);
    ctx->pc = 0x109BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109BC8u;
    // 0x109bcc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109078u, 0x109BC8u, 0x109BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109BD0u;
label_109bd0:
    // 0x109bd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109bd4: 0xc04240a  jal         func_109028
    ctx->pc = 0x109BD4u;
    SET_GPR_U32(ctx, 31, 0x109BDCu);
    ctx->pc = 0x109BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109BD4u;
    // 0x109bd8: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109BD4u, 0x109BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109BDCu;
label_109bdc:
    // 0x109bdc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x109bdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109be0: 0xc04241e  jal         func_109078
    ctx->pc = 0x109BE0u;
    SET_GPR_U32(ctx, 31, 0x109BE8u);
    ctx->pc = 0x109BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109BE0u;
    // 0x109be4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109078u, 0x109BE0u, 0x109BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109BE8u;
label_109be8:
    // 0x109be8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109bec: 0xc04240a  jal         func_109028
    ctx->pc = 0x109BECu;
    SET_GPR_U32(ctx, 31, 0x109BF4u);
    ctx->pc = 0x109BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109BECu;
    // 0x109bf0: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109BECu, 0x109BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109BF4u;
label_109bf4:
    // 0x109bf4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x109bf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109bf8: 0xc04241e  jal         func_109078
    ctx->pc = 0x109BF8u;
    SET_GPR_U32(ctx, 31, 0x109C00u);
    ctx->pc = 0x109BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109BF8u;
    // 0x109bfc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109078u, 0x109BF8u, 0x109C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C00u;
label_109c00:
    // 0x109c00: 0x101780  sll         $v0, $s0, 30
    ctx->pc = 0x109c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 30));
    // 0x109c04: 0x118bc0  sll         $s1, $s1, 15
    ctx->pc = 0x109c04u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 15));
    // 0x109c08: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x109c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x109c0c: 0x108082  srl         $s0, $s0, 2
    ctx->pc = 0x109c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x109c10: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x109c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x109c14: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x109c14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x109c18: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x109c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x109c1c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x109c1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x109c20: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x109c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x109c24: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x109c24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x109c28: 0xfe900018  sd          $s0, 0x18($s4)
    ctx->pc = 0x109c28u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 16));
    // 0x109c2c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x109c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_109c30:
    // 0x109c30: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x109c30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109c34: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x109C34u;
    {
        const bool branch_taken_0x109c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x109C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C34u;
        // 0x109c38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c34) {
            ctx->pc = 0x109C44u;
            goto label_109c44;
        }
    }
    ctx->pc = 0x109C3Cu;
    // 0x109c3c: 0xc04240a  jal         func_109028
    ctx->pc = 0x109C3Cu;
    SET_GPR_U32(ctx, 31, 0x109C44u);
    ctx->pc = 0x109C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C3Cu;
    // 0x109c40: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109C3Cu, 0x109C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C44u;
label_109c44:
    // 0x109c44: 0x13c00006  beqz        $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x109C44u;
    {
        const bool branch_taken_0x109c44 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x109C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C44u;
        // 0x109c48: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c44) {
            ctx->pc = 0x109C60u;
            goto label_109c60;
        }
    }
    ctx->pc = 0x109C4Cu;
    // 0x109c4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c50: 0x24423bd8  addiu       $v0, $v0, 0x3BD8
    ctx->pc = 0x109c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15320));
    // 0x109c54: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x109c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x109c58: 0xc04240a  jal         func_109028
    ctx->pc = 0x109C58u;
    SET_GPR_U32(ctx, 31, 0x109C60u);
    ctx->pc = 0x109C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C58u;
    // 0x109c5c: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109C58u, 0x109C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C60u;
label_109c60:
    // 0x109c60: 0x16b00045  bne         $s5, $s0, . + 4 + (0x45 << 2)
    ctx->pc = 0x109C60u;
    {
        const bool branch_taken_0x109c60 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 16));
        ctx->pc = 0x109C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C60u;
        // 0x109c64: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c60) {
            ctx->pc = 0x109D78u;
            goto label_109d78;
        }
    }
    ctx->pc = 0x109C68u;
    // 0x109c68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c6c: 0xc04240a  jal         func_109028
    ctx->pc = 0x109C6Cu;
    SET_GPR_U32(ctx, 31, 0x109C74u);
    ctx->pc = 0x109C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C6Cu;
    // 0x109c70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109C6Cu, 0x109C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C74u;
label_109c74:
    // 0x109c74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x109c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c7c: 0xc04240a  jal         func_109028
    ctx->pc = 0x109C7Cu;
    SET_GPR_U32(ctx, 31, 0x109C84u);
    ctx->pc = 0x109C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C7Cu;
    // 0x109c80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109C7Cu, 0x109C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C84u;
label_109c84:
    // 0x109c84: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x109c84u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c8c: 0xc04240a  jal         func_109028
    ctx->pc = 0x109C8Cu;
    SET_GPR_U32(ctx, 31, 0x109C94u);
    ctx->pc = 0x109C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C8Cu;
    // 0x109c90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109C8Cu, 0x109C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C94u;
label_109c94:
    // 0x109c94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x109c94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c9c: 0xc04240a  jal         func_109028
    ctx->pc = 0x109C9Cu;
    SET_GPR_U32(ctx, 31, 0x109CA4u);
    ctx->pc = 0x109CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C9Cu;
    // 0x109ca0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109C9Cu, 0x109CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CA4u;
label_109ca4:
    // 0x109ca4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x109ca4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ca8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109cac: 0xc04240a  jal         func_109028
    ctx->pc = 0x109CACu;
    SET_GPR_U32(ctx, 31, 0x109CB4u);
    ctx->pc = 0x109CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CACu;
    // 0x109cb0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109CACu, 0x109CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CB4u;
label_109cb4:
    // 0x109cb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109cb8: 0xc04240a  jal         func_109028
    ctx->pc = 0x109CB8u;
    SET_GPR_U32(ctx, 31, 0x109CC0u);
    ctx->pc = 0x109CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CB8u;
    // 0x109cbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109CB8u, 0x109CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CC0u;
label_109cc0:
    // 0x109cc0: 0x1615000a  bne         $s0, $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x109CC0u;
    {
        const bool branch_taken_0x109cc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        ctx->pc = 0x109CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CC0u;
        // 0x109cc4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109cc0) {
            ctx->pc = 0x109CECu;
            goto label_109cec;
        }
    }
    ctx->pc = 0x109CC8u;
    // 0x109cc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ccc: 0xc04240a  jal         func_109028
    ctx->pc = 0x109CCCu;
    SET_GPR_U32(ctx, 31, 0x109CD4u);
    ctx->pc = 0x109CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CCCu;
    // 0x109cd0: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109CCCu, 0x109CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CD4u;
label_109cd4:
    // 0x109cd4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109cd8: 0xc04240a  jal         func_109028
    ctx->pc = 0x109CD8u;
    SET_GPR_U32(ctx, 31, 0x109CE0u);
    ctx->pc = 0x109CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CD8u;
    // 0x109cdc: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109CD8u, 0x109CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CE0u;
label_109ce0:
    // 0x109ce0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ce4: 0xc04240a  jal         func_109028
    ctx->pc = 0x109CE4u;
    SET_GPR_U32(ctx, 31, 0x109CECu);
    ctx->pc = 0x109CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CE4u;
    // 0x109ce8: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109CE4u, 0x109CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CECu;
label_109cec:
    // 0x109cec: 0x17d50005  bne         $fp, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x109CECu;
    {
        const bool branch_taken_0x109cec = (GPR_U64(ctx, 30) != GPR_U64(ctx, 21));
        ctx->pc = 0x109CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CECu;
        // 0x109cf0: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109cec) {
            ctx->pc = 0x109D04u;
            goto label_109d04;
        }
    }
    ctx->pc = 0x109CF4u;
    // 0x109cf4: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x109CF4u;
    SET_GPR_U32(ctx, 31, 0x109CFCu);
    ctx->pc = 0x109CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CF4u;
    // 0x109cf8: 0x2484c870  addiu       $a0, $a0, -0x3790 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x109CF4u, 0x109CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CFCu;
label_109cfc:
    // 0x109cfc: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x109CFCu;
    {
        const bool branch_taken_0x109cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CFCu;
        // 0x109d00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109cfc) {
            ctx->pc = 0x109EF0u;
            goto label_109ef0;
        }
    }
    ctx->pc = 0x109D04u;
label_109d04:
    // 0x109d04: 0x16550003  bne         $s2, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x109D04u;
    {
        const bool branch_taken_0x109d04 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        ctx->pc = 0x109D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D04u;
        // 0x109d08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d04) {
            ctx->pc = 0x109D14u;
            goto label_109d14;
        }
    }
    ctx->pc = 0x109D0Cu;
    // 0x109d0c: 0xc04240a  jal         func_109028
    ctx->pc = 0x109D0Cu;
    SET_GPR_U32(ctx, 31, 0x109D14u);
    ctx->pc = 0x109D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D0Cu;
    // 0x109d10: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109D0Cu, 0x109D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109D14u;
label_109d14:
    // 0x109d14: 0x16f50003  bne         $s7, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x109D14u;
    {
        const bool branch_taken_0x109d14 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 21));
        ctx->pc = 0x109D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D14u;
        // 0x109d18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d14) {
            ctx->pc = 0x109D24u;
            goto label_109d24;
        }
    }
    ctx->pc = 0x109D1Cu;
    // 0x109d1c: 0xc04240a  jal         func_109028
    ctx->pc = 0x109D1Cu;
    SET_GPR_U32(ctx, 31, 0x109D24u);
    ctx->pc = 0x109D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D1Cu;
    // 0x109d20: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109D1Cu, 0x109D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109D24u;
label_109d24:
    // 0x109d24: 0x16350014  bne         $s1, $s5, . + 4 + (0x14 << 2)
    ctx->pc = 0x109D24u;
    {
        const bool branch_taken_0x109d24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x109D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D24u;
        // 0x109d28: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d24) {
            ctx->pc = 0x109D78u;
            goto label_109d78;
        }
    }
    ctx->pc = 0x109D2Cu;
    // 0x109d2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d30: 0xc04241e  jal         func_109078
    ctx->pc = 0x109D30u;
    SET_GPR_U32(ctx, 31, 0x109D38u);
    ctx->pc = 0x109D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D30u;
    // 0x109d34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109078u, 0x109D30u, 0x109D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109D38u;
label_109d38:
    // 0x109d38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d3c: 0xc04240a  jal         func_109028
    ctx->pc = 0x109D3Cu;
    SET_GPR_U32(ctx, 31, 0x109D44u);
    ctx->pc = 0x109D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D3Cu;
    // 0x109d40: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109D3Cu, 0x109D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109D44u;
label_109d44:
    // 0x109d44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x109d44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d48: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x109D48u;
    {
        const bool branch_taken_0x109d48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x109D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D48u;
        // 0x109d4c: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d48) {
            ctx->pc = 0x109D78u;
            goto label_109d78;
        }
    }
    ctx->pc = 0x109D50u;
    // 0x109d50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d54: 0x0  nop
    ctx->pc = 0x109d54u;
    // NOP
label_109d58:
    // 0x109d58: 0xc04240a  jal         func_109028
    ctx->pc = 0x109D58u;
    SET_GPR_U32(ctx, 31, 0x109D60u);
    ctx->pc = 0x109D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D58u;
    // 0x109d5c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109D58u, 0x109D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109D60u;
label_109d60:
    // 0x109d60: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x109d60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x109d64: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x109d64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x109d68: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x109D68u;
    {
        const bool branch_taken_0x109d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D68u;
        // 0x109d6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d68) {
            ctx->pc = 0x109D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109d58;
        }
    }
    ctx->pc = 0x109D70u;
    // 0x109d70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x109D70u;
    {
        const bool branch_taken_0x109d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D70u;
        // 0x109d74: 0xde620018  ld          $v0, 0x18($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d70) {
            ctx->pc = 0x109D7Cu;
            goto label_109d7c;
        }
    }
    ctx->pc = 0x109D78u;
label_109d78:
    // 0x109d78: 0xde620018  ld          $v0, 0x18($s3)
    ctx->pc = 0x109d78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
label_109d7c:
    // 0x109d7c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x109d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x109d80: 0x52102f  dsubu       $v0, $v0, $s2
    ctx->pc = 0x109d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 18));
    // 0x109d84: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x109d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x109d88: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x109d88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x109d8c: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x109d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x109d90: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x109D90u;
    {
        const bool branch_taken_0x109d90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x109d90) {
            ctx->pc = 0x109D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109D90u;
            // 0x109d94: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109DA4u;
            goto label_109da4;
        }
    }
    ctx->pc = 0x109D98u;
    // 0x109d98: 0xc042430  jal         func_1090C0
    ctx->pc = 0x109D98u;
    SET_GPR_U32(ctx, 31, 0x109DA0u);
    ctx->pc = 0x109D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D98u;
    // 0x109d9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1090C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1090C0u, 0x109D98u, 0x109DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109DA0u;
label_109da0:
    // 0x109da0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x109da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_109da4:
    // 0x109da4: 0x3404bd00  ori         $a0, $zero, 0xBD00
    ctx->pc = 0x109da4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48384);
    // 0x109da8: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x109da8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x109dac: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x109dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x109db0: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x109db0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x109db4: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x109db4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x109db8: 0x2605fffd  addiu       $a1, $s0, -0x3
    ctx->pc = 0x109db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
    // 0x109dbc: 0xae850024  sw          $a1, 0x24($s4)
    ctx->pc = 0x109dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 5));
    // 0x109dc0: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x109dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x109dc4: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x109DC4u;
    {
        const bool branch_taken_0x109dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x109DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DC4u;
        // 0x109dc8: 0xae820020  sw          $v0, 0x20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109dc4) {
            ctx->pc = 0x109DF0u;
            goto label_109df0;
        }
    }
    ctx->pc = 0x109DCCu;
    // 0x109dcc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109dd0: 0xc04240a  jal         func_109028
    ctx->pc = 0x109DD0u;
    SET_GPR_U32(ctx, 31, 0x109DD8u);
    ctx->pc = 0x109DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109DD0u;
    // 0x109dd4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109DD0u, 0x109DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109DD8u;
label_109dd8:
    // 0x109dd8: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x109dd8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x109ddc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x109ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x109de0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x109de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x109de4: 0x2605fff9  addiu       $a1, $s0, -0x7
    ctx->pc = 0x109de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967289));
    // 0x109de8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x109de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x109dec: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x109decu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_109df0:
    // 0x109df0: 0x10a0003f  beqz        $a1, . + 4 + (0x3F << 2)
    ctx->pc = 0x109DF0u;
    {
        const bool branch_taken_0x109df0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x109DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DF0u;
        // 0x109df4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109df0) {
            ctx->pc = 0x109EF0u;
            goto label_109ef0;
        }
    }
    ctx->pc = 0x109DF8u;
    // 0x109df8: 0xc042430  jal         func_1090C0
    ctx->pc = 0x109DF8u;
    SET_GPR_U32(ctx, 31, 0x109E00u);
    ctx->pc = 0x109DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109DF8u;
    // 0x109dfc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1090C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1090C0u, 0x109DF8u, 0x109E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E00u;
label_109e00:
    // 0x109e00: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x109E00u;
    {
        const bool branch_taken_0x109e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E00u;
        // 0x109e04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109e00) {
            ctx->pc = 0x109EF0u;
            goto label_109ef0;
        }
    }
    ctx->pc = 0x109E08u;
label_109e08:
    // 0x109e08: 0x3402bc00  ori         $v0, $zero, 0xBC00
    ctx->pc = 0x109e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48128);
    // 0x109e0c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x109e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x109e10: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x109E10u;
    {
        const bool branch_taken_0x109e10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x109e10) {
            ctx->pc = 0x109E78u;
            goto label_109e78;
        }
    }
    ctx->pc = 0x109E18u;
    // 0x109e18: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x109e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48896);
    // 0x109e1c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x109e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x109e20: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x109E20u;
    {
        const bool branch_taken_0x109e20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x109e20) {
            ctx->pc = 0x109E80u;
            goto label_109e80;
        }
    }
    ctx->pc = 0x109E28u;
    // 0x109e28: 0x3402f000  ori         $v0, $zero, 0xF000
    ctx->pc = 0x109e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x109e2c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x109e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x109e30: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x109E30u;
    {
        const bool branch_taken_0x109e30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x109e30) {
            ctx->pc = 0x109E78u;
            goto label_109e78;
        }
    }
    ctx->pc = 0x109E38u;
    // 0x109e38: 0x3402f100  ori         $v0, $zero, 0xF100
    ctx->pc = 0x109e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61696);
    // 0x109e3c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x109e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x109e40: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x109E40u;
    {
        const bool branch_taken_0x109e40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x109e40) {
            ctx->pc = 0x109E78u;
            goto label_109e78;
        }
    }
    ctx->pc = 0x109E48u;
    // 0x109e48: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x109e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x109e4c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x109e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x109e50: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x109E50u;
    {
        const bool branch_taken_0x109e50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x109e50) {
            ctx->pc = 0x109E78u;
            goto label_109e78;
        }
    }
    ctx->pc = 0x109E58u;
    // 0x109e58: 0x3402f200  ori         $v0, $zero, 0xF200
    ctx->pc = 0x109e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61952);
    // 0x109e5c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x109e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x109e60: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x109E60u;
    {
        const bool branch_taken_0x109e60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x109e60) {
            ctx->pc = 0x109E78u;
            goto label_109e78;
        }
    }
    ctx->pc = 0x109E68u;
    // 0x109e68: 0x3402f800  ori         $v0, $zero, 0xF800
    ctx->pc = 0x109e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63488);
    // 0x109e6c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x109e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x109e70: 0x14820015  bne         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x109E70u;
    {
        const bool branch_taken_0x109e70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x109e70) {
            ctx->pc = 0x109EC8u;
            goto label_109ec8;
        }
    }
    ctx->pc = 0x109E78u;
label_109e78:
    // 0x109e78: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x109e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48896);
    // 0x109e7c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x109e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_109e80:
    // 0x109e80: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x109E80u;
    {
        const bool branch_taken_0x109e80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x109E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E80u;
        // 0x109e84: 0x8e900008  lw          $s0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109e80) {
            ctx->pc = 0x109EACu;
            goto label_109eac;
        }
    }
    ctx->pc = 0x109E88u;
    // 0x109e88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e8c: 0xc04240a  jal         func_109028
    ctx->pc = 0x109E8Cu;
    SET_GPR_U32(ctx, 31, 0x109E94u);
    ctx->pc = 0x109E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E8Cu;
    // 0x109e90: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109E8Cu, 0x109E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E94u;
label_109e94:
    // 0x109e94: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x109e94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x109e98: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x109e98u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x109e9c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x109e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x109ea0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x109ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x109ea4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x109ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x109ea8: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x109ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_109eac:
    // 0x109eac: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x109EACu;
    {
        const bool branch_taken_0x109eac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x109EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109EACu;
        // 0x109eb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109eac) {
            ctx->pc = 0x109EF0u;
            goto label_109ef0;
        }
    }
    ctx->pc = 0x109EB4u;
    // 0x109eb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109eb8: 0xc042430  jal         func_1090C0
    ctx->pc = 0x109EB8u;
    SET_GPR_U32(ctx, 31, 0x109EC0u);
    ctx->pc = 0x109EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109EB8u;
    // 0x109ebc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1090C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1090C0u, 0x109EB8u, 0x109EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109EC0u;
label_109ec0:
    // 0x109ec0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x109EC0u;
    {
        const bool branch_taken_0x109ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109EC0u;
        // 0x109ec4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ec0) {
            ctx->pc = 0x109EF0u;
            goto label_109ef0;
        }
    }
    ctx->pc = 0x109EC8u;
label_109ec8:
    // 0x109ec8: 0x3402be00  ori         $v0, $zero, 0xBE00
    ctx->pc = 0x109ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48640);
    // 0x109ecc: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x109eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x109ed0: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x109ED0u;
    {
        const bool branch_taken_0x109ed0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x109ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109ED0u;
        // 0x109ed4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ed0) {
            ctx->pc = 0x109EF0u;
            goto label_109ef0;
        }
    }
    ctx->pc = 0x109ED8u;
    // 0x109ed8: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x109ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x109edc: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x109EDCu;
    {
        const bool branch_taken_0x109edc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x109EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109EDCu;
        // 0x109ee0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109edc) {
            ctx->pc = 0x109EF4u;
            goto label_109ef4;
        }
    }
    ctx->pc = 0x109EE4u;
    // 0x109ee4: 0xc042430  jal         func_1090C0
    ctx->pc = 0x109EE4u;
    SET_GPR_U32(ctx, 31, 0x109EECu);
    ctx->pc = 0x109EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109EE4u;
    // 0x109ee8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1090C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1090C0u, 0x109EE4u, 0x109EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109EECu;
label_109eec:
    // 0x109eec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_109ef0:
    // 0x109ef0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x109ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_109ef4:
    // 0x109ef4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x109ef4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x109ef8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x109ef8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x109efc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x109efcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x109f00: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x109f00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x109f04: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x109f04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x109f08: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x109f08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x109f0c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x109f0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109f10: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x109f10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109f14: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x109f14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109f18: 0x3e00008  jr          $ra
    ctx->pc = 0x109F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F18u;
        // 0x109f1c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109F20u;
}
