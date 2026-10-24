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

// Function: __moddi3
// Address: 0x11d518 - 0x11db80
void ps2___moddi3_0x11d518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___moddi3_0x11d518");
#endif

    ctx->pc = 0x11d518u;

    // 0x11d518: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x11d518u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d51c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11d51cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11d520: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x11d520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x11d524: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x11d524u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x11d528: 0xa203c  dsll32      $a0, $t2, 0
    ctx->pc = 0x11d528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << (32 + 0));
    // 0x11d52c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x11d52cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11d530: 0x4810016  bgez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11D530u;
    {
        const bool branch_taken_0x11d530 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x11D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D530u;
        // 0x11d534: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d530) {
            ctx->pc = 0x11D58Cu;
            goto label_11d58c;
        }
    }
    ctx->pc = 0x11D538u;
    // 0x11d538: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x11d538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x11d53c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11d53cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11d540: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11d540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d544: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11d544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11d548: 0x21023  negu        $v0, $v0
    ctx->pc = 0x11d548u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11d54c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x11d54cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x11d550: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11d550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11d554: 0x41823  negu        $v1, $a0
    ctx->pc = 0x11d554u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x11d558: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11d558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11d55c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x11d55cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x11d560: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x11d560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x11d564: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x11d564u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x11d568: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x11d568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d56c: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x11d56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11d570: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11d570u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11d574: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11d574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11d578: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x11d578u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x11d57c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x11d57cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11d580: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11d580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11d584: 0xc34025  or          $t0, $a2, $v1
    ctx->pc = 0x11d584u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x11d588: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x11d588u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
label_11d58c:
    // 0x11d58c: 0x5203f  dsra32      $a0, $a1, 0
    ctx->pc = 0x11d58cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x11d590: 0x4810013  bgez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11D590u;
    {
        const bool branch_taken_0x11d590 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x11D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D590u;
        // 0x11d594: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d590) {
            ctx->pc = 0x11D5E0u;
            goto label_11d5e0;
        }
    }
    ctx->pc = 0x11D598u;
    // 0x11d598: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x11d598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11d59c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11d59cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11d5a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11d5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d5a4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11d5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11d5a8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x11d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11d5ac: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x11d5acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x11d5b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11d5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11d5b4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11d5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11d5b8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x11d5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x11d5bc: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x11d5bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11d5c0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x11d5c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x11d5c4: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x11d5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11d5c8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11d5c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11d5cc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x11d5ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11d5d0: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x11d5d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x11d5d4: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x11d5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11d5d8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x11d5d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11d5dc: 0xe42825  or          $a1, $a3, $a0
    ctx->pc = 0x11d5dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_11d5e0:
    // 0x11d5e0: 0x8603c  dsll32      $t4, $t0, 0
    ctx->pc = 0x11d5e0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) << (32 + 0));
    // 0x11d5e4: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x11d5e4u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x11d5e8: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x11d5e8u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x11d5ec: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x11d5ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x11d5f0: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x11d5f0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x11d5f4: 0x5403c  dsll32      $t0, $a1, 0
    ctx->pc = 0x11d5f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11d5f8: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x11d5f8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x11d5fc: 0x152000b3  bnez        $t1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x11D5FCu;
    {
        const bool branch_taken_0x11d5fc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D5FCu;
        // 0x11d600: 0x3a0c82d  daddu       $t9, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d5fc) {
            ctx->pc = 0x11D8CCu;
            goto label_11d8cc;
        }
    }
    ctx->pc = 0x11D604u;
    // 0x11d604: 0x148102b  sltu        $v0, $t2, $t0
    ctx->pc = 0x11d604u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11d608: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x11D608u;
    {
        const bool branch_taken_0x11d608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D608u;
        // 0x11d60c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d608) {
            ctx->pc = 0x11D698u;
            goto label_11d698;
        }
    }
    ctx->pc = 0x11D610u;
    // 0x11d610: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x11d610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11d614: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D614u;
    {
        const bool branch_taken_0x11d614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D614u;
        // 0x11d618: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d614) {
            ctx->pc = 0x11D630u;
            goto label_11d630;
        }
    }
    ctx->pc = 0x11D61Cu;
    // 0x11d61c: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x11d61cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x11d620: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x11d620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11d624: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11D624u;
    {
        const bool branch_taken_0x11d624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D624u;
        // 0x11d628: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d624) {
            ctx->pc = 0x11D648u;
            goto label_11d648;
        }
    }
    ctx->pc = 0x11D62Cu;
    // 0x11d62c: 0x0  nop
    ctx->pc = 0x11d62cu;
    // NOP
label_11d630:
    // 0x11d630: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x11d630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11d634: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11d634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11d638: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x11d638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11d63c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x11d63cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11d640: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x11d640u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x11d644: 0x0  nop
    ctx->pc = 0x11d644u;
    // NOP
label_11d648:
    // 0x11d648: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11d648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11d64c: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x11d64cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x11d650: 0x2442de28  addiu       $v0, $v0, -0x21D8
    ctx->pc = 0x11d650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958632));
    // 0x11d654: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x11d654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11d658: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11d658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11d65c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x11d65cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11d660: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11d660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11d664: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x11d664u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x11d668: 0x11a00006  beqz        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D668u;
    {
        const bool branch_taken_0x11d668 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D668u;
        // 0x11d66c: 0xcd1023  subu        $v0, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d668) {
            ctx->pc = 0x11D684u;
            goto label_11d684;
        }
    }
    ctx->pc = 0x11D670u;
    // 0x11d670: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x11d670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x11d674: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x11d674u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x11d678: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x11d678u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x11d67c: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x11d67cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11d680: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x11d680u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
label_11d684:
    // 0x11d684: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x11d684u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x11d688: 0x3107ffff  andi        $a3, $t0, 0xFFFF
    ctx->pc = 0x11d688u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x11d68c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x11D68Cu;
    {
        const bool branch_taken_0x11d68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D68Cu;
        // 0x11d690: 0x145001b  divu        $zero, $t2, $a1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d68c) {
            ctx->pc = 0x11D810u;
            goto label_11d810;
        }
    }
    ctx->pc = 0x11D694u;
    // 0x11d694: 0x0  nop
    ctx->pc = 0x11d694u;
    // NOP
label_11d698:
    // 0x11d698: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11D698u;
    {
        const bool branch_taken_0x11d698 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D698u;
        // 0x11d69c: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d698) {
            ctx->pc = 0x11D6C0u;
            goto label_11d6c0;
        }
    }
    ctx->pc = 0x11D6A0u;
    // 0x11d6a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d6a4: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11D6A4u;
    {
        const bool branch_taken_0x11d6a4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d6a4) {
            ctx->pc = 0x11D6A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D6A4u;
            // 0x11d6a8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D6ACu;
            goto label_11d6ac;
        }
    }
    ctx->pc = 0x11D6ACu;
label_11d6ac:
    // 0x11d6ac: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x11d6acu;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x11d6b0: 0x1012  mflo        $v0
    ctx->pc = 0x11d6b0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11d6b4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x11d6b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d6b8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x11d6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x11d6bc: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x11d6bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_11d6c0:
    // 0x11d6c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D6C0u;
    {
        const bool branch_taken_0x11d6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D6C0u;
        // 0x11d6c4: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6c0) {
            ctx->pc = 0x11D6D8u;
            goto label_11d6d8;
        }
    }
    ctx->pc = 0x11D6C8u;
    // 0x11d6c8: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x11d6c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x11d6cc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x11d6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11d6d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11D6D0u;
    {
        const bool branch_taken_0x11d6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D6D0u;
        // 0x11d6d4: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6d0) {
            ctx->pc = 0x11D6F0u;
            goto label_11d6f0;
        }
    }
    ctx->pc = 0x11D6D8u;
label_11d6d8:
    // 0x11d6d8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x11d6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11d6dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11d6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11d6e0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x11d6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11d6e4: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x11d6e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11d6e8: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x11d6e8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x11d6ec: 0x0  nop
    ctx->pc = 0x11d6ecu;
    // NOP
label_11d6f0:
    // 0x11d6f0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11d6f4: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x11d6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x11d6f8: 0x2442de28  addiu       $v0, $v0, -0x21D8
    ctx->pc = 0x11d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958632));
    // 0x11d6fc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x11d6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11d700: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11d700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11d704: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x11d704u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11d708: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11d708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11d70c: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x11d70cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x11d710: 0x15a00005  bnez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D710u;
    {
        const bool branch_taken_0x11d710 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D710u;
        // 0x11d714: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d710) {
            ctx->pc = 0x11D728u;
            goto label_11d728;
        }
    }
    ctx->pc = 0x11D718u;
    // 0x11d718: 0x1485023  subu        $t2, $t2, $t0
    ctx->pc = 0x11d718u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x11d71c: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x11d71cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x11d720: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x11D720u;
    {
        const bool branch_taken_0x11d720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D720u;
        // 0x11d724: 0x3109ffff  andi        $t1, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d720) {
            ctx->pc = 0x11D804u;
            goto label_11d804;
        }
    }
    ctx->pc = 0x11D728u;
label_11d728:
    // 0x11d728: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x11d728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x11d72c: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x11d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x11d730: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x11d730u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x11d734: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x11d734u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11d738: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x11d738u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x11d73c: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x11d73cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x11d740: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x11d740u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x11d744: 0xe5001b  divu        $zero, $a3, $a1
    ctx->pc = 0x11d744u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x11d748: 0x3109ffff  andi        $t1, $t0, 0xFFFF
    ctx->pc = 0x11d748u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x11d74c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x11d74cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d750: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x11d750u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x11d754: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11D754u;
    {
        const bool branch_taken_0x11d754 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d754) {
            ctx->pc = 0x11D758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D754u;
            // 0x11d758: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D75Cu;
            goto label_11d75c;
        }
    }
    ctx->pc = 0x11D75Cu;
label_11d75c:
    // 0x11d75c: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x11d75cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d760: 0x1012  mflo        $v0
    ctx->pc = 0x11d760u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11d764: 0x1810  mfhi        $v1
    ctx->pc = 0x11d764u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11d768: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11d768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11d76c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11d76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11d770: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11d770u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11d774: 0x493018  mult        $a2, $v0, $t1
    ctx->pc = 0x11d774u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11d778: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11d778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11d77c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11d77cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11d780: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x11D780u;
    {
        const bool branch_taken_0x11d780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d780) {
            ctx->pc = 0x11D784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D780u;
            // 0x11d784: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D7ACu;
            goto label_11d7ac;
        }
    }
    ctx->pc = 0x11D788u;
    // 0x11d788: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11d788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11d78c: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x11d78cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11d790: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D790u;
    {
        const bool branch_taken_0x11d790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d790) {
            ctx->pc = 0x11D794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D790u;
            // 0x11d794: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D7ACu;
            goto label_11d7ac;
        }
    }
    ctx->pc = 0x11D798u;
    // 0x11d798: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11d798u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11d79c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x11D79Cu;
    {
        const bool branch_taken_0x11d79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d79c) {
            ctx->pc = 0x11D7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D79Cu;
            // 0x11d7a0: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D7A8u;
            goto label_11d7a8;
        }
    }
    ctx->pc = 0x11D7A4u;
    // 0x11d7a4: 0x0  nop
    ctx->pc = 0x11d7a4u;
    // NOP
label_11d7a8:
    // 0x11d7a8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x11d7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_11d7ac:
    // 0x11d7ac: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x11d7acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x11d7b0: 0x67001b  divu        $zero, $v1, $a3
    ctx->pc = 0x11d7b0u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x11d7b4: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11D7B4u;
    {
        const bool branch_taken_0x11d7b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d7b4) {
            ctx->pc = 0x11D7B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D7B4u;
            // 0x11d7b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D7BCu;
            goto label_11d7bc;
        }
    }
    ctx->pc = 0x11D7BCu;
label_11d7bc:
    // 0x11d7bc: 0x1012  mflo        $v0
    ctx->pc = 0x11d7bcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11d7c0: 0x1810  mfhi        $v1
    ctx->pc = 0x11d7c0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11d7c4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11d7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11d7c8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11d7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11d7cc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11d7ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11d7d0: 0x4b3018  mult        $a2, $v0, $t3
    ctx->pc = 0x11d7d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11d7d4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11d7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11d7d8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11d7d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11d7dc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x11D7DCu;
    {
        const bool branch_taken_0x11d7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d7dc) {
            ctx->pc = 0x11D7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D7DCu;
            // 0x11d7e0: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D804u;
            goto label_11d804;
        }
    }
    ctx->pc = 0x11D7E4u;
    // 0x11d7e4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11d7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11d7e8: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x11d7e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11d7ec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D7ECu;
    {
        const bool branch_taken_0x11d7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D7ECu;
        // 0x11d7f0: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7ec) {
            ctx->pc = 0x11D804u;
            goto label_11d804;
        }
    }
    ctx->pc = 0x11D7F4u;
    // 0x11d7f4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11d7f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11d7f8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11D7F8u;
    {
        const bool branch_taken_0x11d7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d7f8) {
            ctx->pc = 0x11D7FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D7F8u;
            // 0x11d7fc: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D800u;
            goto label_11d800;
        }
    }
    ctx->pc = 0x11D800u;
label_11d800:
    // 0x11d800: 0x665023  subu        $t2, $v1, $a2
    ctx->pc = 0x11d800u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_11d804:
    // 0x11d804: 0x145001b  divu        $zero, $t2, $a1
    ctx->pc = 0x11d804u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x11d808: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x11d808u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d80c: 0x0  nop
    ctx->pc = 0x11d80cu;
    // NOP
label_11d810:
    // 0x11d810: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x11d810u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x11d814: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11D814u;
    {
        const bool branch_taken_0x11d814 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d814) {
            ctx->pc = 0x11D818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D814u;
            // 0x11d818: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D81Cu;
            goto label_11d81c;
        }
    }
    ctx->pc = 0x11D81Cu;
label_11d81c:
    // 0x11d81c: 0x1012  mflo        $v0
    ctx->pc = 0x11d81cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11d820: 0x1810  mfhi        $v1
    ctx->pc = 0x11d820u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11d824: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11d824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11d828: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11d828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11d82c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11d82cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11d830: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x11d830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11d834: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11d834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11d838: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11d838u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11d83c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x11D83Cu;
    {
        const bool branch_taken_0x11d83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d83c) {
            ctx->pc = 0x11D840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D83Cu;
            // 0x11d840: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D864u;
            goto label_11d864;
        }
    }
    ctx->pc = 0x11D844u;
    // 0x11d844: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11d844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11d848: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x11d848u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11d84c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D84Cu;
    {
        const bool branch_taken_0x11d84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d84c) {
            ctx->pc = 0x11D850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D84Cu;
            // 0x11d850: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D864u;
            goto label_11d864;
        }
    }
    ctx->pc = 0x11D854u;
    // 0x11d854: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11d854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11d858: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11D858u;
    {
        const bool branch_taken_0x11d858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d858) {
            ctx->pc = 0x11D85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D858u;
            // 0x11d85c: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D860u;
            goto label_11d860;
        }
    }
    ctx->pc = 0x11D860u;
label_11d860:
    // 0x11d860: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x11d860u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_11d864:
    // 0x11d864: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x11d864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x11d868: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x11d868u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x11d86c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11D86Cu;
    {
        const bool branch_taken_0x11d86c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d86c) {
            ctx->pc = 0x11D870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D86Cu;
            // 0x11d870: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D874u;
            goto label_11d874;
        }
    }
    ctx->pc = 0x11D874u;
label_11d874:
    // 0x11d874: 0x1012  mflo        $v0
    ctx->pc = 0x11d874u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11d878: 0x1810  mfhi        $v1
    ctx->pc = 0x11d878u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11d87c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11d87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11d880: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11d880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11d884: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11d884u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11d888: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x11d888u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11d88c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11d88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11d890: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11d890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11d894: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11D894u;
    {
        const bool branch_taken_0x11d894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d894) {
            ctx->pc = 0x11D8B4u;
            goto label_11d8b4;
        }
    }
    ctx->pc = 0x11D89Cu;
    // 0x11d89c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11d89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11d8a0: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x11d8a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11d8a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D8A4u;
    {
        const bool branch_taken_0x11d8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D8A4u;
        // 0x11d8a8: 0x66102b  sltu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8a4) {
            ctx->pc = 0x11D8B4u;
            goto label_11d8b4;
        }
    }
    ctx->pc = 0x11D8ACu;
    // 0x11d8ac: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11D8ACu;
    {
        const bool branch_taken_0x11d8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d8ac) {
            ctx->pc = 0x11D8B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D8ACu;
            // 0x11d8b0: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D8B4u;
            goto label_11d8b4;
        }
    }
    ctx->pc = 0x11D8B4u;
label_11d8b4:
    // 0x11d8b4: 0x13200097  beqz        $t9, . + 4 + (0x97 << 2)
    ctx->pc = 0x11D8B4u;
    {
        const bool branch_taken_0x11d8b4 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D8B4u;
        // 0x11d8b8: 0x666023  subu        $t4, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8b4) {
            ctx->pc = 0x11DB14u;
            goto label_11db14;
        }
    }
    ctx->pc = 0x11D8BCu;
    // 0x11d8bc: 0x1ac1006  srlv        $v0, $t4, $t5
    ctx->pc = 0x11d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x11d8c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11d8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11d8c4: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x11D8C4u;
    {
        const bool branch_taken_0x11d8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D8C4u;
        // 0x11d8c8: 0x2783e  dsrl32      $t7, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8c4) {
            ctx->pc = 0x11DB10u;
            goto label_11db10;
        }
    }
    ctx->pc = 0x11D8CCu;
label_11d8cc:
    // 0x11d8cc: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x11d8ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11d8d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D8D0u;
    {
        const bool branch_taken_0x11d8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D8D0u;
        // 0x11d8d4: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8d0) {
            ctx->pc = 0x11D8ECu;
            goto label_11d8ec;
        }
    }
    ctx->pc = 0x11D8D8u;
    // 0x11d8d8: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x11d8d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x11d8dc: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x11d8dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11d8e0: 0x1e37825  or          $t7, $t7, $v1
    ctx->pc = 0x11d8e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
    // 0x11d8e4: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x11D8E4u;
    {
        const bool branch_taken_0x11d8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D8E4u;
        // 0x11d8e8: 0xffaf0000  sd          $t7, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8e4) {
            ctx->pc = 0x11DB14u;
            goto label_11db14;
        }
    }
    ctx->pc = 0x11D8ECu;
label_11d8ec:
    // 0x11d8ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x11d8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x11d8f0: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x11d8f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11d8f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D8F4u;
    {
        const bool branch_taken_0x11d8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D8F4u;
        // 0x11d8f8: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8f4) {
            ctx->pc = 0x11D910u;
            goto label_11d910;
        }
    }
    ctx->pc = 0x11D8FCu;
    // 0x11d8fc: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x11d8fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x11d900: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x11d900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11d904: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11D904u;
    {
        const bool branch_taken_0x11d904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D904u;
        // 0x11d908: 0x2300b  movn        $a2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d904) {
            ctx->pc = 0x11D928u;
            goto label_11d928;
        }
    }
    ctx->pc = 0x11D90Cu;
    // 0x11d90c: 0x0  nop
    ctx->pc = 0x11d90cu;
    // NOP
label_11d910:
    // 0x11d910: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x11d910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11d914: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11d914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11d918: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x11d918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11d91c: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x11d91cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11d920: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x11d920u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x11d924: 0x0  nop
    ctx->pc = 0x11d924u;
    // NOP
label_11d928:
    // 0x11d928: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11d928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11d92c: 0xc92006  srlv        $a0, $t1, $a2
    ctx->pc = 0x11d92cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x11d930: 0x2442de28  addiu       $v0, $v0, -0x21D8
    ctx->pc = 0x11d930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958632));
    // 0x11d934: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x11d934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11d938: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11d938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11d93c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x11d93cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11d940: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x11d940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11d944: 0xa36823  subu        $t5, $a1, $v1
    ctx->pc = 0x11d944u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x11d948: 0x15a00011  bnez        $t5, . + 4 + (0x11 << 2)
    ctx->pc = 0x11D948u;
    {
        const bool branch_taken_0x11d948 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D948u;
        // 0x11d94c: 0xad7023  subu        $t6, $a1, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d948) {
            ctx->pc = 0x11D990u;
            goto label_11d990;
        }
    }
    ctx->pc = 0x11D950u;
    // 0x11d950: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x11d950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x11d954: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D954u;
    {
        const bool branch_taken_0x11d954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D954u;
        // 0x11d958: 0x1882023  subu        $a0, $t4, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d954) {
            ctx->pc = 0x11D968u;
            goto label_11d968;
        }
    }
    ctx->pc = 0x11D95Cu;
    // 0x11d95c: 0x188102b  sltu        $v0, $t4, $t0
    ctx->pc = 0x11d95cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11d960: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D960u;
    {
        const bool branch_taken_0x11d960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d960) {
            ctx->pc = 0x11D978u;
            goto label_11d978;
        }
    }
    ctx->pc = 0x11D968u;
label_11d968:
    // 0x11d968: 0x1491823  subu        $v1, $t2, $t1
    ctx->pc = 0x11d968u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x11d96c: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x11d96cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11d970: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x11d970u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11d974: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x11d974u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11d978:
    // 0x11d978: 0x13200066  beqz        $t9, . + 4 + (0x66 << 2)
    ctx->pc = 0x11D978u;
    {
        const bool branch_taken_0x11d978 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D978u;
        // 0x11d97c: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d978) {
            ctx->pc = 0x11DB14u;
            goto label_11db14;
        }
    }
    ctx->pc = 0x11D980u;
    // 0x11d980: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x11d980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x11d984: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x11d984u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11d988: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x11D988u;
    {
        const bool branch_taken_0x11d988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D988u;
        // 0x11d98c: 0x1e37825  or          $t7, $t7, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d988) {
            ctx->pc = 0x11DB10u;
            goto label_11db10;
        }
    }
    ctx->pc = 0x11D990u;
label_11d990:
    // 0x11d990: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x11d990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x11d994: 0x1c82006  srlv        $a0, $t0, $t6
    ctx->pc = 0x11d994u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 14) & 0x1F));
    // 0x11d998: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x11d998u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x11d99c: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x11d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x11d9a0: 0x1a92804  sllv        $a1, $t1, $t5
    ctx->pc = 0x11d9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
    // 0x11d9a4: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x11d9a4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11d9a8: 0xa44825  or          $t1, $a1, $a0
    ctx->pc = 0x11d9a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x11d9ac: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x11d9acu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x11d9b0: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x11d9b0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x11d9b4: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x11d9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x11d9b8: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x11d9b8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x11d9bc: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x11d9bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x11d9c0: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x11d9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x11d9c4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11D9C4u;
    {
        const bool branch_taken_0x11d9c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d9c4) {
            ctx->pc = 0x11D9C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D9C4u;
            // 0x11d9c8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D9CCu;
            goto label_11d9cc;
        }
    }
    ctx->pc = 0x11D9CCu;
label_11d9cc:
    // 0x11d9cc: 0x1012  mflo        $v0
    ctx->pc = 0x11d9ccu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11d9d0: 0x1810  mfhi        $v1
    ctx->pc = 0x11d9d0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11d9d4: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x11d9d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d9d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11d9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11d9dc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11d9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11d9e0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11d9e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11d9e4: 0x1653818  mult        $a3, $t3, $a1
    ctx->pc = 0x11d9e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x11d9e8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11d9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11d9ec: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x11d9ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11d9f0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x11D9F0u;
    {
        const bool branch_taken_0x11d9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d9f0) {
            ctx->pc = 0x11D9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D9F0u;
            // 0x11d9f4: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DA24u;
            goto label_11da24;
        }
    }
    ctx->pc = 0x11D9F8u;
    // 0x11d9f8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x11d9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x11d9fc: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x11d9fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11da00: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11DA00u;
    {
        const bool branch_taken_0x11da00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA00u;
        // 0x11da04: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da00) {
            ctx->pc = 0x11DA20u;
            goto label_11da20;
        }
    }
    ctx->pc = 0x11DA08u;
    // 0x11da08: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x11da08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11da0c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11DA0Cu;
    {
        const bool branch_taken_0x11da0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11da0c) {
            ctx->pc = 0x11DA10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DA0Cu;
            // 0x11da10: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DA24u;
            goto label_11da24;
        }
    }
    ctx->pc = 0x11DA14u;
    // 0x11da14: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x11da14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x11da18: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x11da18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x11da1c: 0x0  nop
    ctx->pc = 0x11da1cu;
    // NOP
label_11da20:
    // 0x11da20: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x11da20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_11da24:
    // 0x11da24: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11DA24u;
    {
        const bool branch_taken_0x11da24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x11da24) {
            ctx->pc = 0x11DA28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DA24u;
            // 0x11da28: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DA2Cu;
            goto label_11da2c;
        }
    }
    ctx->pc = 0x11DA2Cu;
label_11da2c:
    // 0x11da2c: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x11da2cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x11da30: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x11da30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x11da34: 0x1012  mflo        $v0
    ctx->pc = 0x11da34u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11da38: 0x1810  mfhi        $v1
    ctx->pc = 0x11da38u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11da3c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11da3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11da40: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11da40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11da44: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11da44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11da48: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11da48u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11da4c: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x11da4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x11da50: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x11da50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11da54: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x11da54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11da58: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11DA58u;
    {
        const bool branch_taken_0x11da58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA58u;
        // 0x11da5c: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da58) {
            ctx->pc = 0x11DA88u;
            goto label_11da88;
        }
    }
    ctx->pc = 0x11DA60u;
    // 0x11da60: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x11da60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x11da64: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x11da64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11da68: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11DA68u;
    {
        const bool branch_taken_0x11da68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA68u;
        // 0x11da6c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da68) {
            ctx->pc = 0x11DA84u;
            goto label_11da84;
        }
    }
    ctx->pc = 0x11DA70u;
    // 0x11da70: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x11da70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11da74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DA74u;
    {
        const bool branch_taken_0x11da74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA74u;
        // 0x11da78: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da74) {
            ctx->pc = 0x11DA88u;
            goto label_11da88;
        }
    }
    ctx->pc = 0x11DA7Cu;
    // 0x11da7c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11da7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11da80: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x11da80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_11da84:
    // 0x11da84: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x11da84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
label_11da88:
    // 0x11da88: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x11da88u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x11da8c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11da8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x11da90: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11da90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11da94: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x11da94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11da98: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x11da98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x11da9c: 0x480019  multu       $v0, $t0
    ctx->pc = 0x11da9cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11daa0: 0x3810  mfhi        $a3
    ctx->pc = 0x11daa0u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x11daa4: 0x3012  mflo        $a2
    ctx->pc = 0x11daa4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x11daa8: 0x147182b  sltu        $v1, $t2, $a3
    ctx->pc = 0x11daa8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11daac: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11DAACu;
    {
        const bool branch_taken_0x11daac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DAACu;
        // 0x11dab0: 0xc82023  subu        $a0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11daac) {
            ctx->pc = 0x11DAC8u;
            goto label_11dac8;
        }
    }
    ctx->pc = 0x11DAB4u;
    // 0x11dab4: 0x14ea0008  bne         $a3, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x11DAB4u;
    {
        const bool branch_taken_0x11dab4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x11DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DAB4u;
        // 0x11dab8: 0x186102b  sltu        $v0, $t4, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dab4) {
            ctx->pc = 0x11DAD8u;
            goto label_11dad8;
        }
    }
    ctx->pc = 0x11DABCu;
    // 0x11dabc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11DABCu;
    {
        const bool branch_taken_0x11dabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dabc) {
            ctx->pc = 0x11DAD8u;
            goto label_11dad8;
        }
    }
    ctx->pc = 0x11DAC4u;
    // 0x11dac4: 0x0  nop
    ctx->pc = 0x11dac4u;
    // NOP
label_11dac8:
    // 0x11dac8: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x11dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x11dacc: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x11daccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11dad0: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x11dad0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11dad4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x11dad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11dad8:
    // 0x11dad8: 0x1320000e  beqz        $t9, . + 4 + (0xE << 2)
    ctx->pc = 0x11DAD8u;
    {
        const bool branch_taken_0x11dad8 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DAD8u;
        // 0x11dadc: 0x1862023  subu        $a0, $t4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dad8) {
            ctx->pc = 0x11DB14u;
            goto label_11db14;
        }
    }
    ctx->pc = 0x11DAE0u;
    // 0x11dae0: 0xa71823  subu        $v1, $a1, $a3
    ctx->pc = 0x11dae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x11dae4: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x11dae4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11dae8: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x11dae8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11daec: 0x1ca2804  sllv        $a1, $t2, $t6
    ctx->pc = 0x11daecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x11daf0: 0x1a42006  srlv        $a0, $a0, $t5
    ctx->pc = 0x11daf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 13) & 0x1F));
    // 0x11daf4: 0x1aa1006  srlv        $v0, $t2, $t5
    ctx->pc = 0x11daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x11daf8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x11daf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x11dafc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11dafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11db00: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x11db00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11db04: 0x5783e  dsrl32      $t7, $a1, 0
    ctx->pc = 0x11db04u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11db08: 0x1e27825  or          $t7, $t7, $v0
    ctx->pc = 0x11db08u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
    // 0x11db0c: 0x0  nop
    ctx->pc = 0x11db0cu;
    // NOP
label_11db10:
    // 0x11db10: 0xff2f0000  sd          $t7, 0x0($t9)
    ctx->pc = 0x11db10u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 15));
label_11db14:
    // 0x11db14: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11DB14u;
    {
        const bool branch_taken_0x11db14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DB14u;
        // 0x11db18: 0xdfa30000  ld          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11db14) {
            ctx->pc = 0x11DB70u;
            goto label_11db70;
        }
    }
    ctx->pc = 0x11DB1Cu;
    // 0x11db1c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x11db1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11db20: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x11db20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11db24: 0x304c024  and         $t8, $t8, $a0
    ctx->pc = 0x11db24u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 4));
    // 0x11db28: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x11db28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11db2c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11db2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11db30: 0x21023  negu        $v0, $v0
    ctx->pc = 0x11db30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11db34: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11db34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11db38: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11db38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11db3c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x11db3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x11db40: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11db40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11db44: 0x302c025  or          $t8, $t8, $v0
    ctx->pc = 0x11db44u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 2));
    // 0x11db48: 0x18203c  dsll32      $a0, $t8, 0
    ctx->pc = 0x11db48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) << (32 + 0));
    // 0x11db4c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x11db4cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11db50: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11db50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11db54: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11db54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11db58: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x11db58u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11db5c: 0x302c024  and         $t8, $t8, $v0
    ctx->pc = 0x11db5cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 2));
    // 0x11db60: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x11db60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11db64: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11db64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11db68: 0x303c025  or          $t8, $t8, $v1
    ctx->pc = 0x11db68u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 3));
    // 0x11db6c: 0xffb80000  sd          $t8, 0x0($sp)
    ctx->pc = 0x11db6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 24));
label_11db70:
    // 0x11db70: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x11db70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11db74: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x11db74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11db78: 0x3e00008  jr          $ra
    ctx->pc = 0x11DB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DB78u;
        // 0x11db7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DB80u;
}
