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

// Function: entry_0032f820
// Address: 0x32f820 - 0x32fad4
void entry_0032f820_0x32f820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032f820_0x32f820");
#endif

    switch (ctx->pc) {
        case 0x32f860u: goto label_32f860;
        case 0x32f940u: goto label_32f940;
        case 0x32f9a8u: goto label_32f9a8;
        case 0x32fa34u: goto label_32fa34;
        case 0x32fa68u: goto label_32fa68;
        case 0x32fa98u: goto label_32fa98;
        default: break;
    }

    ctx->pc = 0x32f820u;

    // 0x32f820: 0x1ea0ff5e  bgtz        $s5, . + 4 + (-0xA2 << 2)
    ctx->pc = 0x32F820u;
    {
        const bool branch_taken_0x32f820 = (GPR_S32(ctx, 21) > 0);
        if (branch_taken_0x32f820) {
            ctx->pc = 0x32F59Cu;
            return;
        }
    }
    ctx->pc = 0x32F828u;
    // 0x32f828: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32f828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32f82c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x32f82cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x32f830: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x32f830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x32f834: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x32f834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x32f838: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x32f838u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x32f83c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32f83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32f840: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32f840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32f844: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x32f844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x32f848: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x32f848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x32f84c: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x32f84cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x32f850: 0x26e4001c  addiu       $a0, $s7, 0x1C
    ctx->pc = 0x32f850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 28));
    // 0x32f854: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x32f854u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x32f858: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32F858u;
    SET_GPR_U32(ctx, 31, 0x32F860u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32F858u, 0x32F860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F860u;
label_32f860:
    // 0x32f860: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x32f860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32f864: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x32f864u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32f868: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x32f868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x32f86c: 0x248395f0  addiu       $v1, $a0, -0x6A10
    ctx->pc = 0x32f86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940144));
    // 0x32f870: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x32f870u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32f874: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32f874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32f878: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32f878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32f87c: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x32f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x32f880: 0x34432b16  ori         $v1, $v0, 0x2B16
    ctx->pc = 0x32f880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x32f884: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x32f884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x32f888: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x32f888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x32f88c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x32f88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32f890: 0x34620040  ori         $v0, $v1, 0x40
    ctx->pc = 0x32f890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x32f894: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32f894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32f898: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x32f898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x32f89c: 0x34448080  ori         $a0, $v0, 0x8080
    ctx->pc = 0x32f89cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x32f8a0: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x32f8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32f8a4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x32f8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x32f8a8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x32f8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32f8ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32f8b0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x32f8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32f8b4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x32f8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32f8b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32f8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32f8bc: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x32f8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x32f8c0: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x32f8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x32f8c4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x32f8c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x32f8c8: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x32f8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x32f8cc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x32f8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x32f8d0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x32f8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x32f8d4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x32f8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x32f8d8: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x32f8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32f8dc: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x32f8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x32f8e0: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x32f8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32f8e4: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x32f8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x32f8e8: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x32f8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x32f8ec: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x32f8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x32f8f0: 0x3c037900  lui         $v1, 0x7900
    ctx->pc = 0x32f8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30976 << 16));
    // 0x32f8f4: 0x34647000  ori         $a0, $v1, 0x7000
    ctx->pc = 0x32f8f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28672);
    // 0x32f8f8: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x32f8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x32f8fc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x32f8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x32f900: 0x3403fffa  ori         $v1, $zero, 0xFFFA
    ctx->pc = 0x32f900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x32f904: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x32f904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x32f908: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32f908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32f90c: 0x3c048800  lui         $a0, 0x8800
    ctx->pc = 0x32f90cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34816 << 16));
    // 0x32f910: 0x34829000  ori         $v0, $a0, 0x9000
    ctx->pc = 0x32f910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)36864);
    // 0x32f914: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x32f914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x32f918: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x32f918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x32f91c: 0x3403fffa  ori         $v1, $zero, 0xFFFA
    ctx->pc = 0x32f91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x32f920: 0x26060028  addiu       $a2, $s0, 0x28
    ctx->pc = 0x32f920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x32f924: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x32f924u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x32f928: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x32f928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x32f92c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x32f92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x32f930: 0x2465e7a8  addiu       $a1, $v1, -0x1858
    ctx->pc = 0x32f930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961064));
    // 0x32f934: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x32f934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x32f938: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x32F938u;
    SET_GPR_U32(ctx, 31, 0x32F940u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x32F940u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32F940u) { return; }
    ctx->pc = 0x32F940u;
label_32f940:
    // 0x32f940: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x32f940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x32f944: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x32f944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x32f948: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x32f948u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32f94c: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x32f94cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x32f950: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x32f950u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32f954: 0xdcc30018  ld          $v1, 0x18($a2)
    ctx->pc = 0x32f954u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x32f958: 0x32378  dsll        $a0, $v1, 13
    ctx->pc = 0x32f958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 13);
    // 0x32f95c: 0x41cbe  dsrl32      $v1, $a0, 18
    ctx->pc = 0x32f95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) >> (32 + 18));
    // 0x32f960: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x32f960u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x32f964: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x32f964u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x32f968: 0x30673fff  andi        $a3, $v1, 0x3FFF
    ctx->pc = 0x32f968u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x32f96c: 0x7217c  dsll32      $a0, $a3, 5
    ctx->pc = 0x32f96cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 5));
    // 0x32f970: 0x3c02fff8  lui         $v0, 0xFFF8
    ctx->pc = 0x32f970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65528 << 16));
    // 0x32f974: 0x3443001f  ori         $v1, $v0, 0x1F
    ctx->pc = 0x32f974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x32f978: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32f978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32f97c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x32f97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x32f980: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32f980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x32f984: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x32f984u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x32f988: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x32f988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x32f98c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x32f98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x32f990: 0x643825  or          $a3, $v1, $a0
    ctx->pc = 0x32f990u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x32f994: 0xfcc70018  sd          $a3, 0x18($a2)
    ctx->pc = 0x32f994u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
    // 0x32f998: 0x26e40018  addiu       $a0, $s7, 0x18
    ctx->pc = 0x32f998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
    // 0x32f99c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x32f99cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x32f9a0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32F9A0u;
    SET_GPR_U32(ctx, 31, 0x32F9A8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32F9A0u, 0x32F9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F9A8u;
label_32f9a8:
    // 0x32f9a8: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x32f9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x32f9ac: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x32f9acu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x32f9b0: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x32f9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x32f9b4: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x32f9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x32f9b8: 0xafa400cc  sw          $a0, 0xCC($sp)
    ctx->pc = 0x32f9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
    // 0x32f9bc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x32f9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x32f9c0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x32f9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x32f9c4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x32f9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x32f9c8: 0x34641009  ori         $a0, $v1, 0x1009
    ctx->pc = 0x32f9c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
    // 0x32f9cc: 0xae440004  sw          $a0, 0x4($s2)
    ctx->pc = 0x32f9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
    // 0x32f9d0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x32f9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32f9d4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32f9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32f9d8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x32f9d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x32f9dc: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x32f9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x32f9e0: 0x3465000a  ori         $a1, $v1, 0xA
    ctx->pc = 0x32f9e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x32f9e4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x32f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x32f9e8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x32f9e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32f9ec: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x32f9ecu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x32f9f0: 0x413b8  dsll        $v0, $a0, 14
    ctx->pc = 0x32f9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 14);
    // 0x32f9f4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x32f9f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x32f9f8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x32f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32f9fc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x32f9fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32fa00: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x32fa00u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x32fa04: 0x41638  dsll        $v0, $a0, 24
    ctx->pc = 0x32fa04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 24);
    // 0x32fa08: 0x452025  or          $a0, $v0, $a1
    ctx->pc = 0x32fa08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x32fa0c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x32fa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32fa10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32fa10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32fa14: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x32fa14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x32fa18: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x32fa18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
    // 0x32fa1c: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x32fa1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x32fa20: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x32fa20u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x32fa24: 0x26e40018  addiu       $a0, $s7, 0x18
    ctx->pc = 0x32fa24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
    // 0x32fa28: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x32fa28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x32fa2c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32FA2Cu;
    SET_GPR_U32(ctx, 31, 0x32FA34u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32FA2Cu, 0x32FA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FA34u;
label_32fa34:
    // 0x32fa34: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x32fa34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32fa38: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x32fa38u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32fa3c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32fa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32fa40: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x32fa40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x32fa44: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x32fa44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x32fa48: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x32fa48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x32fa4c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x32fa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x32fa50: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x32fa50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x32fa54: 0xfe450008  sd          $a1, 0x8($s2)
    ctx->pc = 0x32fa54u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 5));
    // 0x32fa58: 0x26e40018  addiu       $a0, $s7, 0x18
    ctx->pc = 0x32fa58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
    // 0x32fa5c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x32fa5cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x32fa60: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32FA60u;
    SET_GPR_U32(ctx, 31, 0x32FA68u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32FA60u, 0x32FA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FA68u;
label_32fa68:
    // 0x32fa68: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x32fa68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32fa6c: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x32fa6cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32fa70: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x32fa70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x32fa74: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x32fa74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x32fa78: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x32fa78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x32fa7c: 0x34621048  ori         $v0, $v1, 0x1048
    ctx->pc = 0x32fa7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4168);
    // 0x32fa80: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x32fa80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x32fa84: 0xfe400008  sd          $zero, 0x8($s2)
    ctx->pc = 0x32fa84u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 0));
    // 0x32fa88: 0x26e40018  addiu       $a0, $s7, 0x18
    ctx->pc = 0x32fa88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
    // 0x32fa8c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x32fa8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x32fa90: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32FA90u;
    SET_GPR_U32(ctx, 31, 0x32FA98u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32FA90u, 0x32FA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FA98u;
label_32fa98:
    // 0x32fa98: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x32fa98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32fa9c: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x32fa9cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x32faa0: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x32faa0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x32faa4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x32faa4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32faa8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x32faa8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32faac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x32faacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32fab0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x32fab0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32fab4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32fab4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32fab8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32fab8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32fabc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32fabcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32fac0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32fac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32fac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32fac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32fac8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x32fac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x32facc: 0x3e00008  jr          $ra
    ctx->pc = 0x32FACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FAD4u;
}
