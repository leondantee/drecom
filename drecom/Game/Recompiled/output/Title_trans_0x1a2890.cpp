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

// Function: Title_trans
// Address: 0x1a2890 - 0x1a2b08
void Title_trans_0x1a2890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Title_trans_0x1a2890");
#endif

    switch (ctx->pc) {
        case 0x1a2990u: goto label_1a2990;
        case 0x1a29a8u: goto label_1a29a8;
        case 0x1a2a60u: goto label_1a2a60;
        case 0x1a2a78u: goto label_1a2a78;
        case 0x1a2a90u: goto label_1a2a90;
        case 0x1a2aa8u: goto label_1a2aa8;
        case 0x1a2ac0u: goto label_1a2ac0;
        case 0x1a2ad8u: goto label_1a2ad8;
        case 0x1a2af0u: goto label_1a2af0;
        default: break;
    }

    ctx->pc = 0x1a2890u;

    // 0x1a2890: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a2890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a2894: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1a2894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1a2898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a2898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a289c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a289cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a28a0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1a28a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1a28a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a28a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a28a8: 0x90620006  lbu         $v0, 0x6($v1)
    ctx->pc = 0x1a28a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x1a28ac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a28acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a28b0: 0xa0620006  sb          $v0, 0x6($v1)
    ctx->pc = 0x1a28b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a28b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a28b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a28b8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1a28b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a28bc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1a28bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1a28c0: 0x24427610  addiu       $v0, $v0, 0x7610
    ctx->pc = 0x1a28c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30224));
    // 0x1a28c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a28c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a28c8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1a28c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a28cc: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1a28ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a28d0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a28d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a28d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a28d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a28d8: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x1a28d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1a28dc: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x1a28dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1a28e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a28e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a28e4: 0x90420005  lbu         $v0, 0x5($v0)
    ctx->pc = 0x1a28e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x1a28e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a28e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a28ec: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1A28ECu;
    {
        const bool branch_taken_0x1a28ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a28ec) {
            ctx->pc = 0x1A29B0u;
            goto label_1a29b0;
        }
    }
    ctx->pc = 0x1A28F4u;
    // 0x1a28f4: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x1a28f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x1a28f8: 0x34432020  ori         $v1, $v0, 0x2020
    ctx->pc = 0x1a28f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x1a28fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a28fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a2900: 0x24420098  addiu       $v0, $v0, 0x98
    ctx->pc = 0x1a2900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x1a2904: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a2904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a2908: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x1a2908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x1a290c: 0x34432020  ori         $v1, $v0, 0x2020
    ctx->pc = 0x1a290cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x1a2910: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a2910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a2914: 0x244200c4  addiu       $v0, $v0, 0xC4
    ctx->pc = 0x1a2914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x1a2918: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a2918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a291c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a291cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a2920: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1a2920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1a2924: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2928: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A2928u;
    {
        const bool branch_taken_0x1a2928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2928) {
            ctx->pc = 0x1A2950u;
            goto label_1a2950;
        }
    }
    ctx->pc = 0x1A2930u;
    // 0x1a2930: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2930u;
    {
        const bool branch_taken_0x1a2930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2930) {
            ctx->pc = 0x1A2940u;
            goto label_1a2940;
        }
    }
    ctx->pc = 0x1A2938u;
    // 0x1a2938: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A2938u;
    {
        const bool branch_taken_0x1a2938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2938) {
            ctx->pc = 0x1A2958u;
            goto label_1a2958;
        }
    }
    ctx->pc = 0x1A2940u;
label_1a2940:
    // 0x1a2940: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a2940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a2944: 0x24510088  addiu       $s1, $v0, 0x88
    ctx->pc = 0x1a2944u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x1a2948: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2948u;
    {
        const bool branch_taken_0x1a2948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2948) {
            ctx->pc = 0x1A2958u;
            goto label_1a2958;
        }
    }
    ctx->pc = 0x1A2950u;
label_1a2950:
    // 0x1a2950: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a2950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a2954: 0x245100b4  addiu       $s1, $v0, 0xB4
    ctx->pc = 0x1a2954u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
label_1a2958:
    // 0x1a2958: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x1a2958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x1a295c: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x1a295cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1a2960: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1a2960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1a2964: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a2964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a2968: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a2968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a296c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a296cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a2970: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1a2970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1a2974: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a2974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a2978: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a2978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a297c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a297cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a2980: 0x2444161c  addiu       $a0, $v0, 0x161C
    ctx->pc = 0x1a2980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5660));
    // 0x1a2984: 0x24650088  addiu       $a1, $v1, 0x88
    ctx->pc = 0x1a2984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 136));
    // 0x1a2988: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A2988u;
    SET_GPR_U32(ctx, 31, 0x1A2990u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A2988u, 0x1A2990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2990u;
label_1a2990:
    // 0x1a2990: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a2990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a2994: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a2994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a2998: 0x2444161c  addiu       $a0, $v0, 0x161C
    ctx->pc = 0x1a2998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5660));
    // 0x1a299c: 0x246500b4  addiu       $a1, $v1, 0xB4
    ctx->pc = 0x1a299cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1a29a0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A29A0u;
    SET_GPR_U32(ctx, 31, 0x1A29A8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A29A0u, 0x1A29A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A29A8u;
label_1a29a8:
    // 0x1a29a8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1A29A8u;
    {
        const bool branch_taken_0x1a29a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a29a8) {
            ctx->pc = 0x1A2A90u;
            goto label_1a2a90;
        }
    }
    ctx->pc = 0x1A29B0u;
label_1a29b0:
    // 0x1a29b0: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x1a29b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x1a29b4: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x1a29b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1a29b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a29b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a29bc: 0x244200f0  addiu       $v0, $v0, 0xF0
    ctx->pc = 0x1a29bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1a29c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a29c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a29c4: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x1a29c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x1a29c8: 0x34432020  ori         $v1, $v0, 0x2020
    ctx->pc = 0x1a29c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x1a29cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a29ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a29d0: 0x2442011c  addiu       $v0, $v0, 0x11C
    ctx->pc = 0x1a29d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    // 0x1a29d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a29d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a29d8: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x1a29d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x1a29dc: 0x34432020  ori         $v1, $v0, 0x2020
    ctx->pc = 0x1a29dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x1a29e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a29e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a29e4: 0x24420148  addiu       $v0, $v0, 0x148
    ctx->pc = 0x1a29e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 328));
    // 0x1a29e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a29e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a29ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a29ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a29f0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1a29f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a29f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a29f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a29f8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A29F8u;
    {
        const bool branch_taken_0x1a29f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a29f8) {
            ctx->pc = 0x1A2A20u;
            goto label_1a2a20;
        }
    }
    ctx->pc = 0x1A2A00u;
    // 0x1a2a00: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2A00u;
    {
        const bool branch_taken_0x1a2a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2a00) {
            ctx->pc = 0x1A2A10u;
            goto label_1a2a10;
        }
    }
    ctx->pc = 0x1A2A08u;
    // 0x1a2a08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A2A08u;
    {
        const bool branch_taken_0x1a2a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2a08) {
            ctx->pc = 0x1A2A28u;
            goto label_1a2a28;
        }
    }
    ctx->pc = 0x1A2A10u;
label_1a2a10:
    // 0x1a2a10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a2a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a2a14: 0x2451010c  addiu       $s1, $v0, 0x10C
    ctx->pc = 0x1a2a14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 268));
    // 0x1a2a18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2A18u;
    {
        const bool branch_taken_0x1a2a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2a18) {
            ctx->pc = 0x1A2A28u;
            goto label_1a2a28;
        }
    }
    ctx->pc = 0x1A2A20u;
label_1a2a20:
    // 0x1a2a20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a2a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a2a24: 0x24510138  addiu       $s1, $v0, 0x138
    ctx->pc = 0x1a2a24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 312));
label_1a2a28:
    // 0x1a2a28: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x1a2a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x1a2a2c: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x1a2a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1a2a30: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1a2a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1a2a34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a2a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a2a38: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a2a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a2a3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a2a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a2a40: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1a2a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1a2a44: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a2a44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a2a48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a2a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a2a4c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a2a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a2a50: 0x2444161c  addiu       $a0, $v0, 0x161C
    ctx->pc = 0x1a2a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5660));
    // 0x1a2a54: 0x246500e0  addiu       $a1, $v1, 0xE0
    ctx->pc = 0x1a2a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x1a2a58: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A2A58u;
    SET_GPR_U32(ctx, 31, 0x1A2A60u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A2A58u, 0x1A2A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2A60u;
label_1a2a60:
    // 0x1a2a60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a2a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a2a64: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a2a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a2a68: 0x2444161c  addiu       $a0, $v0, 0x161C
    ctx->pc = 0x1a2a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5660));
    // 0x1a2a6c: 0x2465010c  addiu       $a1, $v1, 0x10C
    ctx->pc = 0x1a2a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 268));
    // 0x1a2a70: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A2A70u;
    SET_GPR_U32(ctx, 31, 0x1A2A78u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A2A70u, 0x1A2A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2A78u;
label_1a2a78:
    // 0x1a2a78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a2a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a2a7c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a2a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a2a80: 0x2444161c  addiu       $a0, $v0, 0x161C
    ctx->pc = 0x1a2a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5660));
    // 0x1a2a84: 0x24650138  addiu       $a1, $v1, 0x138
    ctx->pc = 0x1a2a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 312));
    // 0x1a2a88: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A2A88u;
    SET_GPR_U32(ctx, 31, 0x1A2A90u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A2A88u, 0x1A2A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2A90u;
label_1a2a90:
    // 0x1a2a90: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a2a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a2a94: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a2a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a2a98: 0x2444161c  addiu       $a0, $v0, 0x161C
    ctx->pc = 0x1a2a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5660));
    // 0x1a2a9c: 0x24650028  addiu       $a1, $v1, 0x28
    ctx->pc = 0x1a2a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x1a2aa0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A2AA0u;
    SET_GPR_U32(ctx, 31, 0x1A2AA8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A2AA0u, 0x1A2AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2AA8u;
label_1a2aa8:
    // 0x1a2aa8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a2aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a2aac: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a2aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a2ab0: 0x2444161c  addiu       $a0, $v0, 0x161C
    ctx->pc = 0x1a2ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5660));
    // 0x1a2ab4: 0x24650058  addiu       $a1, $v1, 0x58
    ctx->pc = 0x1a2ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
    // 0x1a2ab8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A2AB8u;
    SET_GPR_U32(ctx, 31, 0x1A2AC0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A2AB8u, 0x1A2AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2AC0u;
label_1a2ac0:
    // 0x1a2ac0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a2ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a2ac4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a2ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a2ac8: 0x2444161c  addiu       $a0, $v0, 0x161C
    ctx->pc = 0x1a2ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5660));
    // 0x1a2acc: 0x24650068  addiu       $a1, $v1, 0x68
    ctx->pc = 0x1a2accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
    // 0x1a2ad0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A2AD0u;
    SET_GPR_U32(ctx, 31, 0x1A2AD8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A2AD0u, 0x1A2AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2AD8u;
label_1a2ad8:
    // 0x1a2ad8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a2ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a2adc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a2adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a2ae0: 0x2444161c  addiu       $a0, $v0, 0x161C
    ctx->pc = 0x1a2ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5660));
    // 0x1a2ae4: 0x24650078  addiu       $a1, $v1, 0x78
    ctx->pc = 0x1a2ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x1a2ae8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A2AE8u;
    SET_GPR_U32(ctx, 31, 0x1A2AF0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A2AE8u, 0x1A2AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2AF0u;
label_1a2af0:
    // 0x1a2af0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1a2af0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2af4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a2af4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2af8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a2af8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2afc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1a2afcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a2b00: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2B08u;
}
