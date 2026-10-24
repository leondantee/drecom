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

// Function: entry_001a7428
// Address: 0x1a7428 - 0x1a7588
void entry_001a7428_0x1a7428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7428_0x1a7428");
#endif

    ctx->pc = 0x1a7428u;

    // 0x1a7428: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a7428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a742c: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a742cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7430: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a7430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7434: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a7434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7438: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a7438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a743c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1a743cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7440: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1a7440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a7444: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1a7444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a7448: 0xac440340  sw          $a0, 0x340($v0)
    ctx->pc = 0x1a7448u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 832), GPR_U32(ctx, 4));
    // 0x1a744c: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x1a744cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x1a7450: 0x34442b16  ori         $a0, $v0, 0x2B16
    ctx->pc = 0x1a7450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x1a7454: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a7454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7458: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a7458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a745c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a745cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7460: 0x2a040  sll         $s4, $v0, 1
    ctx->pc = 0x1a7460u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a7464: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x1a7464u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1a7468: 0x144080  sll         $t0, $s4, 2
    ctx->pc = 0x1a7468u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1a746c: 0x2483021  addu        $a2, $s2, $t0
    ctx->pc = 0x1a746cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x1a7470: 0xacc40344  sw          $a0, 0x344($a2)
    ctx->pc = 0x1a7470u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 836), GPR_U32(ctx, 4));
    // 0x1a7474: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a7474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7478: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a7478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a747c: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x1a747cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7480: 0x72840  sll         $a1, $a3, 1
    ctx->pc = 0x1a7480u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1a7484: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x1a7484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a7488: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1a7488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a748c: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1a748cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a7490: 0xac60034c  sw          $zero, 0x34C($v1)
    ctx->pc = 0x1a7490u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 844), GPR_U32(ctx, 0));
    // 0x1a7494: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x1a7494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x1a7498: 0x34468080  ori         $a2, $v0, 0x8080
    ctx->pc = 0x1a7498u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1a749c: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a749cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a74a0: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1a74a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a74a4: 0xa3a821  addu        $s5, $a1, $v1
    ctx->pc = 0x1a74a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a74a8: 0x151040  sll         $v0, $s5, 1
    ctx->pc = 0x1a74a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x1a74ac: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1a74acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a74b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a74b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a74b4: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1a74b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a74b8: 0x24420350  addiu       $v0, $v0, 0x350
    ctx->pc = 0x1a74b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
    // 0x1a74bc: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1a74bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1a74c0: 0x92020317  lbu         $v0, 0x317($s0)
    ctx->pc = 0x1a74c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 791)));
    // 0x1a74c4: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1A74C4u;
    {
        const bool branch_taken_0x1a74c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a74c4) {
            ctx->pc = 0x1A7588u;
            return;
        }
    }
    ctx->pc = 0x1A74CCu;
    // 0x1a74cc: 0x9208031c  lbu         $t0, 0x31C($s0)
    ctx->pc = 0x1a74ccu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 796)));
    // 0x1a74d0: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x1a74d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1a74d4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1a74d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a74d8: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x1a74d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a74dc: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1a74dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a74e0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1a74e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1a74e4: 0x2482cca0  addiu       $v0, $a0, -0x3360
    ctx->pc = 0x1a74e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954144));
    // 0x1a74e8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a74e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a74ec: 0x9062001e  lbu         $v0, 0x1E($v1)
    ctx->pc = 0x1a74ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x1a74f0: 0x23e7c  dsll32      $a3, $v0, 25
    ctx->pc = 0x1a74f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 25));
    // 0x1a74f4: 0x7273e  dsrl32      $a0, $a3, 28
    ctx->pc = 0x1a74f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) >> (32 + 28));
    // 0x1a74f8: 0x30850003  andi        $a1, $a0, 0x3
    ctx->pc = 0x1a74f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x1a74fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a74fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a7500: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x1a7500u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a7504: 0x82020310  lb          $v0, 0x310($s0)
    ctx->pc = 0x1a7504u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a7508: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x1a7508u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a750c: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x1a750cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x1a7510: 0xd12821  addu        $a1, $a2, $s1
    ctx->pc = 0x1a7510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x1a7514: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x1a7514u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a7518: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1a7518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a751c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1a751cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1a7520: 0x9203031c  lbu         $v1, 0x31C($s0)
    ctx->pc = 0x1a7520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 796)));
    // 0x1a7524: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1a7524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a7528: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1a7528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a752c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a752cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a7530: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x1a7530u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7534: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a7534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1a7538: 0x2443cca0  addiu       $v1, $v0, -0x3360
    ctx->pc = 0x1a7538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x1a753c: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1a753cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a7540: 0xdca60018  ld          $a2, 0x18($a1)
    ctx->pc = 0x1a7540u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1a7544: 0x61b78  dsll        $v1, $a2, 13
    ctx->pc = 0x1a7544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << 13);
    // 0x1a7548: 0x314be  dsrl32      $v0, $v1, 18
    ctx->pc = 0x1a7548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> (32 + 18));
    // 0x1a754c: 0x44202d  daddu       $a0, $v0, $a0
    ctx->pc = 0x1a754cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1a7550: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1a7550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1a7554: 0x26220003  addiu       $v0, $s1, 0x3
    ctx->pc = 0x1a7554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7558: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1a7558u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a755c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a755cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a7560: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x1a7560u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7564: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x1a7564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1a7568: 0x944800b0  lhu         $t0, 0xB0($v0)
    ctx->pc = 0x1a7568u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1a756c: 0x30643fff  andi        $a0, $v1, 0x3FFF
    ctx->pc = 0x1a756cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1a7570: 0x2403c000  addiu       $v1, $zero, -0x4000
    ctx->pc = 0x1a7570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x1a7574: 0x1033824  and         $a3, $t0, $v1
    ctx->pc = 0x1a7574u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x1a7578: 0xe41825  or          $v1, $a3, $a0
    ctx->pc = 0x1a7578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x1a757c: 0xa44300b0  sh          $v1, 0xB0($v0)
    ctx->pc = 0x1a757cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 176), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a7580: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x1A7580u;
    {
        const bool branch_taken_0x1a7580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7580) {
            ctx->pc = 0x1A77E8u;
            return;
        }
    }
    ctx->pc = 0x1A7588u;
}
