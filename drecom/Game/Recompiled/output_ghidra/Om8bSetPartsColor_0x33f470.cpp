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

// Function: Om8bSetPartsColor
// Address: 0x33f470 - 0x33f790
void Om8bSetPartsColor_0x33f470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om8bSetPartsColor_0x33f470");
#endif

    ctx->pc = 0x33f470u;

    // 0x33f470: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33f470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33f474: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33f474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33f478: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x33f478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x33f47c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x33f47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x33f480: 0xa3a60028  sb          $a2, 0x28($sp)
    ctx->pc = 0x33f480u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 6));
    // 0x33f484: 0xa3a70030  sb          $a3, 0x30($sp)
    ctx->pc = 0x33f484u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 7));
    // 0x33f488: 0xa3a80038  sb          $t0, 0x38($sp)
    ctx->pc = 0x33f488u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 8));
    // 0x33f48c: 0xa3a90040  sb          $t1, 0x40($sp)
    ctx->pc = 0x33f48cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 9));
    // 0x33f490: 0xa3aa0048  sb          $t2, 0x48($sp)
    ctx->pc = 0x33f490u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 10));
    // 0x33f494: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x33f494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33f498: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x33f498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33f49c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x33f49cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x33f4a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33f4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33f4a4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x33f4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x33f4a8: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x33f4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x33f4ac: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x33f4acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33f4b0: 0x92030060  lbu         $v1, 0x60($s0)
    ctx->pc = 0x33f4b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x33f4b4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33f4b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f4b8: 0x93a30028  lbu         $v1, 0x28($sp)
    ctx->pc = 0x33f4b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33f4bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f4c0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x33f4c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33f4c4: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x33F4C4u;
    {
        const bool branch_taken_0x33f4c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f4c4) {
            ctx->pc = 0x33F51Cu;
            goto label_33f51c;
        }
    }
    ctx->pc = 0x33F4CCu;
    // 0x33f4cc: 0x92030060  lbu         $v1, 0x60($s0)
    ctx->pc = 0x33f4ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x33f4d0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33f4d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f4d4: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x33f4d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33f4d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f4dc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x33f4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f4e0: 0x93a30028  lbu         $v1, 0x28($sp)
    ctx->pc = 0x33f4e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33f4e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f4e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f4e8: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x33f4e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x33f4ec: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x33F4ECu;
    {
        const bool branch_taken_0x33f4ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f4ec) {
            ctx->pc = 0x33F504u;
            goto label_33f504;
        }
    }
    ctx->pc = 0x33F4F4u;
    // 0x33f4f4: 0x93a30028  lbu         $v1, 0x28($sp)
    ctx->pc = 0x33f4f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33f4f8: 0xa2030060  sb          $v1, 0x60($s0)
    ctx->pc = 0x33f4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x33f4fc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x33F4FCu;
    {
        const bool branch_taken_0x33f4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f4fc) {
            ctx->pc = 0x33F564u;
            goto label_33f564;
        }
    }
    ctx->pc = 0x33F504u;
label_33f504:
    // 0x33f504: 0x92040060  lbu         $a0, 0x60($s0)
    ctx->pc = 0x33f504u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x33f508: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x33f508u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33f50c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33f50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f510: 0xa2030060  sb          $v1, 0x60($s0)
    ctx->pc = 0x33f510u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x33f514: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x33F514u;
    {
        const bool branch_taken_0x33f514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f514) {
            ctx->pc = 0x33F564u;
            goto label_33f564;
        }
    }
    ctx->pc = 0x33F51Cu;
label_33f51c:
    // 0x33f51c: 0x92030060  lbu         $v1, 0x60($s0)
    ctx->pc = 0x33f51cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x33f520: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33f520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f524: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x33f524u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33f528: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f52c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x33f52cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f530: 0x93a30028  lbu         $v1, 0x28($sp)
    ctx->pc = 0x33f530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33f534: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f538: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x33f538u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33f53c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x33F53Cu;
    {
        const bool branch_taken_0x33f53c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f53c) {
            ctx->pc = 0x33F554u;
            goto label_33f554;
        }
    }
    ctx->pc = 0x33F544u;
    // 0x33f544: 0x93a30028  lbu         $v1, 0x28($sp)
    ctx->pc = 0x33f544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33f548: 0xa2030060  sb          $v1, 0x60($s0)
    ctx->pc = 0x33f548u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x33f54c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33F54Cu;
    {
        const bool branch_taken_0x33f54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f54c) {
            ctx->pc = 0x33F564u;
            goto label_33f564;
        }
    }
    ctx->pc = 0x33F554u;
label_33f554:
    // 0x33f554: 0x92040060  lbu         $a0, 0x60($s0)
    ctx->pc = 0x33f554u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x33f558: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x33f558u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33f55c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x33f55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f560: 0xa2030060  sb          $v1, 0x60($s0)
    ctx->pc = 0x33f560u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
label_33f564:
    // 0x33f564: 0x92030064  lbu         $v1, 0x64($s0)
    ctx->pc = 0x33f564u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x33f568: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33f568u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f56c: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x33f56cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33f570: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f574: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x33f574u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33f578: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x33F578u;
    {
        const bool branch_taken_0x33f578 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f578) {
            ctx->pc = 0x33F5D0u;
            goto label_33f5d0;
        }
    }
    ctx->pc = 0x33F580u;
    // 0x33f580: 0x92030064  lbu         $v1, 0x64($s0)
    ctx->pc = 0x33f580u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x33f584: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33f584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f588: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x33f588u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33f58c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f590: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x33f590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f594: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x33f594u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33f598: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f59c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x33f59cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x33f5a0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x33F5A0u;
    {
        const bool branch_taken_0x33f5a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f5a0) {
            ctx->pc = 0x33F5B8u;
            goto label_33f5b8;
        }
    }
    ctx->pc = 0x33F5A8u;
    // 0x33f5a8: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x33f5a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33f5ac: 0xa2030064  sb          $v1, 0x64($s0)
    ctx->pc = 0x33f5acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 3));
    // 0x33f5b0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x33F5B0u;
    {
        const bool branch_taken_0x33f5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f5b0) {
            ctx->pc = 0x33F618u;
            goto label_33f618;
        }
    }
    ctx->pc = 0x33F5B8u;
label_33f5b8:
    // 0x33f5b8: 0x92040064  lbu         $a0, 0x64($s0)
    ctx->pc = 0x33f5b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x33f5bc: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x33f5bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33f5c0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33f5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f5c4: 0xa2030064  sb          $v1, 0x64($s0)
    ctx->pc = 0x33f5c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 3));
    // 0x33f5c8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x33F5C8u;
    {
        const bool branch_taken_0x33f5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f5c8) {
            ctx->pc = 0x33F618u;
            goto label_33f618;
        }
    }
    ctx->pc = 0x33F5D0u;
label_33f5d0:
    // 0x33f5d0: 0x92030064  lbu         $v1, 0x64($s0)
    ctx->pc = 0x33f5d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x33f5d4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33f5d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f5d8: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x33f5d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33f5dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f5e0: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x33f5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f5e4: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x33f5e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33f5e8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f5ec: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x33f5ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33f5f0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x33F5F0u;
    {
        const bool branch_taken_0x33f5f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f5f0) {
            ctx->pc = 0x33F608u;
            goto label_33f608;
        }
    }
    ctx->pc = 0x33F5F8u;
    // 0x33f5f8: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x33f5f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33f5fc: 0xa2030064  sb          $v1, 0x64($s0)
    ctx->pc = 0x33f5fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 3));
    // 0x33f600: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33F600u;
    {
        const bool branch_taken_0x33f600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f600) {
            ctx->pc = 0x33F618u;
            goto label_33f618;
        }
    }
    ctx->pc = 0x33F608u;
label_33f608:
    // 0x33f608: 0x92040064  lbu         $a0, 0x64($s0)
    ctx->pc = 0x33f608u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x33f60c: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x33f60cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33f610: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x33f610u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f614: 0xa2030064  sb          $v1, 0x64($s0)
    ctx->pc = 0x33f614u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 3));
label_33f618:
    // 0x33f618: 0x92030068  lbu         $v1, 0x68($s0)
    ctx->pc = 0x33f618u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x33f61c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33f61cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f620: 0x93a30038  lbu         $v1, 0x38($sp)
    ctx->pc = 0x33f620u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33f624: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f628: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x33f628u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33f62c: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x33F62Cu;
    {
        const bool branch_taken_0x33f62c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f62c) {
            ctx->pc = 0x33F684u;
            goto label_33f684;
        }
    }
    ctx->pc = 0x33F634u;
    // 0x33f634: 0x92030068  lbu         $v1, 0x68($s0)
    ctx->pc = 0x33f634u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x33f638: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33f638u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f63c: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x33f63cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33f640: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f644: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x33f644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f648: 0x93a30038  lbu         $v1, 0x38($sp)
    ctx->pc = 0x33f648u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33f64c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f650: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x33f650u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x33f654: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x33F654u;
    {
        const bool branch_taken_0x33f654 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f654) {
            ctx->pc = 0x33F66Cu;
            goto label_33f66c;
        }
    }
    ctx->pc = 0x33F65Cu;
    // 0x33f65c: 0x93a30038  lbu         $v1, 0x38($sp)
    ctx->pc = 0x33f65cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33f660: 0xa2030068  sb          $v1, 0x68($s0)
    ctx->pc = 0x33f660u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 3));
    // 0x33f664: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x33F664u;
    {
        const bool branch_taken_0x33f664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f664) {
            ctx->pc = 0x33F6CCu;
            goto label_33f6cc;
        }
    }
    ctx->pc = 0x33F66Cu;
label_33f66c:
    // 0x33f66c: 0x92040068  lbu         $a0, 0x68($s0)
    ctx->pc = 0x33f66cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x33f670: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x33f670u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33f674: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33f674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f678: 0xa2030068  sb          $v1, 0x68($s0)
    ctx->pc = 0x33f678u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 3));
    // 0x33f67c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x33F67Cu;
    {
        const bool branch_taken_0x33f67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f67c) {
            ctx->pc = 0x33F6CCu;
            goto label_33f6cc;
        }
    }
    ctx->pc = 0x33F684u;
label_33f684:
    // 0x33f684: 0x92030068  lbu         $v1, 0x68($s0)
    ctx->pc = 0x33f684u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x33f688: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33f688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f68c: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x33f68cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33f690: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f694: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x33f694u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f698: 0x93a30038  lbu         $v1, 0x38($sp)
    ctx->pc = 0x33f698u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33f69c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f6a0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x33f6a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33f6a4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x33F6A4u;
    {
        const bool branch_taken_0x33f6a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f6a4) {
            ctx->pc = 0x33F6BCu;
            goto label_33f6bc;
        }
    }
    ctx->pc = 0x33F6ACu;
    // 0x33f6ac: 0x93a30038  lbu         $v1, 0x38($sp)
    ctx->pc = 0x33f6acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33f6b0: 0xa2030068  sb          $v1, 0x68($s0)
    ctx->pc = 0x33f6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 3));
    // 0x33f6b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33F6B4u;
    {
        const bool branch_taken_0x33f6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f6b4) {
            ctx->pc = 0x33F6CCu;
            goto label_33f6cc;
        }
    }
    ctx->pc = 0x33F6BCu;
label_33f6bc:
    // 0x33f6bc: 0x92040068  lbu         $a0, 0x68($s0)
    ctx->pc = 0x33f6bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x33f6c0: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x33f6c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33f6c4: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x33f6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f6c8: 0xa2030068  sb          $v1, 0x68($s0)
    ctx->pc = 0x33f6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 3));
label_33f6cc:
    // 0x33f6cc: 0x9203006c  lbu         $v1, 0x6C($s0)
    ctx->pc = 0x33f6ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x33f6d0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33f6d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f6d4: 0x93a30040  lbu         $v1, 0x40($sp)
    ctx->pc = 0x33f6d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33f6d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f6dc: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x33f6dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33f6e0: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x33F6E0u;
    {
        const bool branch_taken_0x33f6e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f6e0) {
            ctx->pc = 0x33F738u;
            goto label_33f738;
        }
    }
    ctx->pc = 0x33F6E8u;
    // 0x33f6e8: 0x9203006c  lbu         $v1, 0x6C($s0)
    ctx->pc = 0x33f6e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x33f6ec: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33f6ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f6f0: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x33f6f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33f6f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f6f8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x33f6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f6fc: 0x93a30040  lbu         $v1, 0x40($sp)
    ctx->pc = 0x33f6fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33f700: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f704: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x33f704u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x33f708: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x33F708u;
    {
        const bool branch_taken_0x33f708 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f708) {
            ctx->pc = 0x33F720u;
            goto label_33f720;
        }
    }
    ctx->pc = 0x33F710u;
    // 0x33f710: 0x93a30040  lbu         $v1, 0x40($sp)
    ctx->pc = 0x33f710u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33f714: 0xa203006c  sb          $v1, 0x6C($s0)
    ctx->pc = 0x33f714u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 3));
    // 0x33f718: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x33F718u;
    {
        const bool branch_taken_0x33f718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f718) {
            ctx->pc = 0x33F780u;
            goto label_33f780;
        }
    }
    ctx->pc = 0x33F720u;
label_33f720:
    // 0x33f720: 0x9204006c  lbu         $a0, 0x6C($s0)
    ctx->pc = 0x33f720u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x33f724: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x33f724u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33f728: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33f728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f72c: 0xa203006c  sb          $v1, 0x6C($s0)
    ctx->pc = 0x33f72cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 3));
    // 0x33f730: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x33F730u;
    {
        const bool branch_taken_0x33f730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f730) {
            ctx->pc = 0x33F780u;
            goto label_33f780;
        }
    }
    ctx->pc = 0x33F738u;
label_33f738:
    // 0x33f738: 0x9203006c  lbu         $v1, 0x6C($s0)
    ctx->pc = 0x33f738u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x33f73c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33f73cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f740: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x33f740u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33f744: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f748: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x33f748u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f74c: 0x93a30040  lbu         $v1, 0x40($sp)
    ctx->pc = 0x33f74cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33f750: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f754: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x33f754u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33f758: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x33F758u;
    {
        const bool branch_taken_0x33f758 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f758) {
            ctx->pc = 0x33F770u;
            goto label_33f770;
        }
    }
    ctx->pc = 0x33F760u;
    // 0x33f760: 0x93a30040  lbu         $v1, 0x40($sp)
    ctx->pc = 0x33f760u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33f764: 0xa203006c  sb          $v1, 0x6C($s0)
    ctx->pc = 0x33f764u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 3));
    // 0x33f768: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33F768u;
    {
        const bool branch_taken_0x33f768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f768) {
            ctx->pc = 0x33F780u;
            goto label_33f780;
        }
    }
    ctx->pc = 0x33F770u;
label_33f770:
    // 0x33f770: 0x9204006c  lbu         $a0, 0x6C($s0)
    ctx->pc = 0x33f770u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x33f774: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x33f774u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33f778: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x33f778u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f77c: 0xa203006c  sb          $v1, 0x6C($s0)
    ctx->pc = 0x33f77cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 3));
label_33f780:
    // 0x33f780: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33f780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f784: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x33f784u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33f788: 0x3e00008  jr          $ra
    ctx->pc = 0x33F788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F790u;
}
