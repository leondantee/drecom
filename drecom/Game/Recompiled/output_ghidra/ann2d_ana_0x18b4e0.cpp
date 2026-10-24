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

// Function: ann2d_ana
// Address: 0x18b4e0 - 0x18ba28
void ann2d_ana_0x18b4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ann2d_ana_0x18b4e0");
#endif

    switch (ctx->pc) {
        case 0x18b56cu: goto label_18b56c;
        case 0x18b5b4u: goto label_18b5b4;
        case 0x18b740u: goto label_18b740;
        case 0x18b7a4u: goto label_18b7a4;
        case 0x18b84cu: goto label_18b84c;
        case 0x18b8b0u: goto label_18b8b0;
        case 0x18b958u: goto label_18b958;
        case 0x18b9e0u: goto label_18b9e0;
        default: break;
    }

    ctx->pc = 0x18b4e0u;

    // 0x18b4e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18b4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18b4e4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x18b4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x18b4e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18b4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18b4ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18b4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18b4f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18b4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18b4f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18b4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18b4f8: 0xa7a40050  sh          $a0, 0x50($sp)
    ctx->pc = 0x18b4f8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 80), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b4fc: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x18b4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
    // 0x18b500: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x18b500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x18b504: 0xafa70068  sw          $a3, 0x68($sp)
    ctx->pc = 0x18b504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 7));
    // 0x18b508: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x18b508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x18b50c: 0x2451a630  addiu       $s1, $v0, -0x59D0
    ctx->pc = 0x18b50cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944304));
    // 0x18b510: 0x97a20050  lhu         $v0, 0x50($sp)
    ctx->pc = 0x18b510u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18b514: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x18b514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18b518: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b51c: 0xac430088  sw          $v1, 0x88($v0)
    ctx->pc = 0x18b51cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 3));
    // 0x18b520: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x18b520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b524: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x18b524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x18b528: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18b528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b52c: 0x90820097  lbu         $v0, 0x97($a0)
    ctx->pc = 0x18b52cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 151)));
    // 0x18b530: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18b530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18b534: 0xa0820097  sb          $v0, 0x97($a0)
    ctx->pc = 0x18b534u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 151), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b538: 0x8fb30060  lw          $s3, 0x60($sp)
    ctx->pc = 0x18b538u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18b53c: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x18b53cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18b540: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b544: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x18b544u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b548: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x18b548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x18b54c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b550: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x18b550u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b554: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x18b554u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x18b558: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b55c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x18b55cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b560: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x18b560u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18b564: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18B564u;
    {
        const bool branch_taken_0x18b564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b564) {
            ctx->pc = 0x18B590u;
            goto label_18b590;
        }
    }
    ctx->pc = 0x18B56Cu;
label_18b56c:
    // 0x18b56c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x18b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x18b570: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x18b570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x18b574: 0x94440004  lhu         $a0, 0x4($v0)
    ctx->pc = 0x18b574u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18b578: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x18b578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x18b57c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b580: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b584: 0xa4440004  sh          $a0, 0x4($v0)
    ctx->pc = 0x18b584u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b588: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b58c: 0x0  nop
    ctx->pc = 0x18b58cu;
    // NOP
label_18b590:
    // 0x18b590: 0x2e020006  sltiu       $v0, $s0, 0x6
    ctx->pc = 0x18b590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x18b594: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x18B594u;
    {
        const bool branch_taken_0x18b594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b594) {
            ctx->pc = 0x18B56Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b56c;
        }
    }
    ctx->pc = 0x18B59Cu;
    // 0x18b59c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x18b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18b5a0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x18b5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x18b5a4: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x18b5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x18b5a8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x18b5a8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18b5ac: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x18B5ACu;
    {
        const bool branch_taken_0x18b5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b5ac) {
            ctx->pc = 0x18B688u;
            goto label_18b688;
        }
    }
    ctx->pc = 0x18B5B4u;
label_18b5b4:
    // 0x18b5b4: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x18b5b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18b5b8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x18b5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b5bc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x18b5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x18b5c0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18b5c4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18b5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18b5c8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b5cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b5d0: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x18b5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x18b5d4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x18b5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b5d8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x18b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x18b5dc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18b5e0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18b5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18b5e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b5e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b5ec: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x18b5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x18b5f0: 0x92440008  lbu         $a0, 0x8($s2)
    ctx->pc = 0x18b5f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x18b5f4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x18b5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x18b5f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18b5fc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18b5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18b600: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b604: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b608: 0xa0440018  sb          $a0, 0x18($v0)
    ctx->pc = 0x18b608u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24), (uint8_t)GPR_U32(ctx, 4));
    // 0x18b60c: 0x92440009  lbu         $a0, 0x9($s2)
    ctx->pc = 0x18b60cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x18b610: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x18b610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x18b614: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18b614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18b618: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18b618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18b61c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b620: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b624: 0xa0440019  sb          $a0, 0x19($v0)
    ctx->pc = 0x18b624u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 25), (uint8_t)GPR_U32(ctx, 4));
    // 0x18b628: 0x9244000a  lbu         $a0, 0xA($s2)
    ctx->pc = 0x18b628u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x18b62c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x18b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x18b630: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18b630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18b634: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18b634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18b638: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b63c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b640: 0xa044001a  sb          $a0, 0x1A($v0)
    ctx->pc = 0x18b640u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 4));
    // 0x18b644: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x18b644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18b648: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x18b648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x18b64c: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x18b64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x18b650: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x18b650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18b654: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x18b654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x18b658: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18b658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18b65c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18b65cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18b660: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b664: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b668: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x18b668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
    // 0x18b66c: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x18b66cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x18b670: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18b670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b674: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x18b674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18b678: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x18b678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18b67c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b680: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x18b680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x18b684: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_18b688:
    // 0x18b688: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b68c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x18b68cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x18b690: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18b690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b694: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x18b694u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18b698: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x18B698u;
    {
        const bool branch_taken_0x18b698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b698) {
            ctx->pc = 0x18B5B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b5b4;
        }
    }
    ctx->pc = 0x18B6A0u;
    // 0x18b6a0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x18b6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x18b6a4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x18b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18b6a8: 0x10620049  beq         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x18B6A8u;
    {
        const bool branch_taken_0x18b6a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18b6a8) {
            ctx->pc = 0x18B7D0u;
            goto label_18b7d0;
        }
    }
    ctx->pc = 0x18B6B0u;
    // 0x18b6b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18b6b4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B6B4u;
    {
        const bool branch_taken_0x18b6b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18b6b4) {
            ctx->pc = 0x18B6C4u;
            goto label_18b6c4;
        }
    }
    ctx->pc = 0x18B6BCu;
    // 0x18b6bc: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x18B6BCu;
    {
        const bool branch_taken_0x18b6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b6bc) {
            ctx->pc = 0x18B8DCu;
            goto label_18b8dc;
        }
    }
    ctx->pc = 0x18B6C4u;
label_18b6c4:
    // 0x18b6c4: 0x92230018  lbu         $v1, 0x18($s1)
    ctx->pc = 0x18b6c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x18b6c8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b6cc: 0xa0430094  sb          $v1, 0x94($v0)
    ctx->pc = 0x18b6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 148), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b6d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b6d4: 0x90420094  lbu         $v0, 0x94($v0)
    ctx->pc = 0x18b6d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x18b6d8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18b6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b6dc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18b6e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b6e4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x18b6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18b6e8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x18b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x18b6ec: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x18b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x18b6f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b6f4: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x18b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x18b6f8: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x18b6f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18b6fc: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x18b6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x18b700: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18b700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18b704: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x18b704u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x18b708: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b70c: 0xac43008c  sw          $v1, 0x8C($v0)
    ctx->pc = 0x18b70cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 3));
    // 0x18b710: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x18b710u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18b714: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18b714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b718: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18b718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18b71c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x18B71Cu;
    {
        const bool branch_taken_0x18b71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b71c) {
            ctx->pc = 0x18B770u;
            goto label_18b770;
        }
    }
    ctx->pc = 0x18B724u;
    // 0x18b724: 0x92230019  lbu         $v1, 0x19($s1)
    ctx->pc = 0x18b724u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x18b728: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b72c: 0xa0430095  sb          $v1, 0x95($v0)
    ctx->pc = 0x18b72cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 149), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b730: 0x92220019  lbu         $v0, 0x19($s1)
    ctx->pc = 0x18b730u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x18b734: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18b734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b738: 0xc05e990  jal         func_17A640
    ctx->pc = 0x18B738u;
    SET_GPR_U32(ctx, 31, 0x18B740u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x18B738u, 0x18B740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B740u;
label_18b740:
    // 0x18b740: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x18b740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x18b744: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x18b744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b748: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x18b748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
    // 0x18b74c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b750: 0xa222000e  sb          $v0, 0xE($s1)
    ctx->pc = 0x18b750u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b754: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b758: 0x92230019  lbu         $v1, 0x19($s1)
    ctx->pc = 0x18b758u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x18b75c: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x18b75cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x18b760: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18b760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18b764: 0xa2220019  sb          $v0, 0x19($s1)
    ctx->pc = 0x18b764u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 25), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b768: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x18B768u;
    {
        const bool branch_taken_0x18b768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b768) {
            ctx->pc = 0x18BA04u;
            goto label_18ba04;
        }
    }
    ctx->pc = 0x18B770u;
label_18b770:
    // 0x18b770: 0x92230028  lbu         $v1, 0x28($s1)
    ctx->pc = 0x18b770u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x18b774: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b778: 0xa0430096  sb          $v1, 0x96($v0)
    ctx->pc = 0x18b778u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 150), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b77c: 0x92230019  lbu         $v1, 0x19($s1)
    ctx->pc = 0x18b77cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x18b780: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b784: 0xa0430095  sb          $v1, 0x95($v0)
    ctx->pc = 0x18b784u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 149), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b788: 0x92220019  lbu         $v0, 0x19($s1)
    ctx->pc = 0x18b788u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x18b78c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18b78cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b790: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b794: 0x90420096  lbu         $v0, 0x96($v0)
    ctx->pc = 0x18b794u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 150)));
    // 0x18b798: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x18b798u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b79c: 0xc05e9b0  jal         func_17A6C0
    ctx->pc = 0x18B79Cu;
    SET_GPR_U32(ctx, 31, 0x18B7A4u);
    ctx->pc = 0x17A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A6C0u, 0x18B79Cu, 0x18B7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B7A4u;
label_18b7a4:
    // 0x18b7a4: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x18b7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x18b7a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x18b7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b7ac: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x18b7acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
    // 0x18b7b0: 0xa220000e  sb          $zero, 0xE($s1)
    ctx->pc = 0x18b7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x18b7b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b7b8: 0x92230028  lbu         $v1, 0x28($s1)
    ctx->pc = 0x18b7b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x18b7bc: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x18b7bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x18b7c0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18b7c4: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x18b7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b7c8: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x18B7C8u;
    {
        const bool branch_taken_0x18b7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b7c8) {
            ctx->pc = 0x18BA04u;
            goto label_18ba04;
        }
    }
    ctx->pc = 0x18B7D0u;
label_18b7d0:
    // 0x18b7d0: 0x92230020  lbu         $v1, 0x20($s1)
    ctx->pc = 0x18b7d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x18b7d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b7d8: 0xa0430094  sb          $v1, 0x94($v0)
    ctx->pc = 0x18b7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 148), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b7dc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b7e0: 0x90420094  lbu         $v0, 0x94($v0)
    ctx->pc = 0x18b7e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x18b7e4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18b7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b7e8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18b7ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b7f0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x18b7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18b7f4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x18b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x18b7f8: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x18b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x18b7fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b800: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x18b800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x18b804: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x18b804u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18b808: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x18b808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x18b80c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18b80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18b810: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x18b810u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x18b814: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b818: 0xac43008c  sw          $v1, 0x8C($v0)
    ctx->pc = 0x18b818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 3));
    // 0x18b81c: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x18b81cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18b820: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18b820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b824: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18b824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18b828: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x18B828u;
    {
        const bool branch_taken_0x18b828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b828) {
            ctx->pc = 0x18B87Cu;
            goto label_18b87c;
        }
    }
    ctx->pc = 0x18B830u;
    // 0x18b830: 0x92230021  lbu         $v1, 0x21($s1)
    ctx->pc = 0x18b830u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
    // 0x18b834: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b838: 0xa0430095  sb          $v1, 0x95($v0)
    ctx->pc = 0x18b838u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 149), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b83c: 0x92220021  lbu         $v0, 0x21($s1)
    ctx->pc = 0x18b83cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
    // 0x18b840: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18b840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b844: 0xc05e990  jal         func_17A640
    ctx->pc = 0x18B844u;
    SET_GPR_U32(ctx, 31, 0x18B84Cu);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x18B844u, 0x18B84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B84Cu;
label_18b84c:
    // 0x18b84c: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x18b84cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x18b850: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x18b850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b854: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x18b854u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
    // 0x18b858: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b85c: 0xa222000e  sb          $v0, 0xE($s1)
    ctx->pc = 0x18b85cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b860: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b864: 0x92230021  lbu         $v1, 0x21($s1)
    ctx->pc = 0x18b864u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
    // 0x18b868: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x18b868u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x18b86c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18b870: 0xa2220021  sb          $v0, 0x21($s1)
    ctx->pc = 0x18b870u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b874: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x18B874u;
    {
        const bool branch_taken_0x18b874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b874) {
            ctx->pc = 0x18BA04u;
            goto label_18ba04;
        }
    }
    ctx->pc = 0x18B87Cu;
label_18b87c:
    // 0x18b87c: 0x92230028  lbu         $v1, 0x28($s1)
    ctx->pc = 0x18b87cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x18b880: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b884: 0xa0430096  sb          $v1, 0x96($v0)
    ctx->pc = 0x18b884u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 150), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b888: 0x92230021  lbu         $v1, 0x21($s1)
    ctx->pc = 0x18b888u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
    // 0x18b88c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b890: 0xa0430095  sb          $v1, 0x95($v0)
    ctx->pc = 0x18b890u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 149), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b894: 0x92220021  lbu         $v0, 0x21($s1)
    ctx->pc = 0x18b894u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
    // 0x18b898: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18b898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b89c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b8a0: 0x90420096  lbu         $v0, 0x96($v0)
    ctx->pc = 0x18b8a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 150)));
    // 0x18b8a4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x18b8a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b8a8: 0xc05e9b0  jal         func_17A6C0
    ctx->pc = 0x18B8A8u;
    SET_GPR_U32(ctx, 31, 0x18B8B0u);
    ctx->pc = 0x17A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A6C0u, 0x18B8A8u, 0x18B8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B8B0u;
label_18b8b0:
    // 0x18b8b0: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x18b8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x18b8b4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x18b8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b8b8: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x18b8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
    // 0x18b8bc: 0xa220000e  sb          $zero, 0xE($s1)
    ctx->pc = 0x18b8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x18b8c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b8c4: 0x92230028  lbu         $v1, 0x28($s1)
    ctx->pc = 0x18b8c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x18b8c8: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x18b8c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x18b8cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18b8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18b8d0: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x18b8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b8d4: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x18B8D4u;
    {
        const bool branch_taken_0x18b8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b8d4) {
            ctx->pc = 0x18BA04u;
            goto label_18ba04;
        }
    }
    ctx->pc = 0x18B8DCu;
label_18b8dc:
    // 0x18b8dc: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x18b8dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x18b8e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b8e4: 0xa0430094  sb          $v1, 0x94($v0)
    ctx->pc = 0x18b8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 148), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b8e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b8ec: 0x90420094  lbu         $v0, 0x94($v0)
    ctx->pc = 0x18b8ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x18b8f0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18b8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b8f4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18b8f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b8fc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x18b8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18b900: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x18b900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x18b904: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x18b904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x18b908: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b90c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x18b90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x18b910: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x18b910u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18b914: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x18b914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x18b918: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18b918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18b91c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x18b91cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x18b920: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b924: 0xac43008c  sw          $v1, 0x8C($v0)
    ctx->pc = 0x18b924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 3));
    // 0x18b928: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x18b928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18b92c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18b92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b930: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18b930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18b934: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18B934u;
    {
        const bool branch_taken_0x18b934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b934) {
            ctx->pc = 0x18B9ACu;
            goto label_18b9ac;
        }
    }
    ctx->pc = 0x18B93Cu;
    // 0x18b93c: 0x9223000d  lbu         $v1, 0xD($s1)
    ctx->pc = 0x18b93cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x18b940: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b944: 0xa0430095  sb          $v1, 0x95($v0)
    ctx->pc = 0x18b944u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 149), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b948: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x18b948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x18b94c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18b94cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b950: 0xc05e990  jal         func_17A640
    ctx->pc = 0x18B950u;
    SET_GPR_U32(ctx, 31, 0x18B958u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x18B950u, 0x18B958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B958u;
label_18b958:
    // 0x18b958: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x18b958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x18b95c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x18b95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b960: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x18b960u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
    // 0x18b964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b968: 0xa222000e  sb          $v0, 0xE($s1)
    ctx->pc = 0x18b968u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b96c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b970: 0x9223000d  lbu         $v1, 0xD($s1)
    ctx->pc = 0x18b970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x18b974: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x18b974u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x18b978: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18b978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18b97c: 0xa222000d  sb          $v0, 0xD($s1)
    ctx->pc = 0x18b97cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b980: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x18b980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x18b984: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x18b984u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x18b988: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x18B988u;
    {
        const bool branch_taken_0x18b988 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b988) {
            ctx->pc = 0x18BA04u;
            goto label_18ba04;
        }
    }
    ctx->pc = 0x18B990u;
    // 0x18b990: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b994: 0x9223002b  lbu         $v1, 0x2B($s1)
    ctx->pc = 0x18b994u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 43)));
    // 0x18b998: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x18b998u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x18b99c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18b9a0: 0xa222002b  sb          $v0, 0x2B($s1)
    ctx->pc = 0x18b9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b9a4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x18B9A4u;
    {
        const bool branch_taken_0x18b9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b9a4) {
            ctx->pc = 0x18BA04u;
            goto label_18ba04;
        }
    }
    ctx->pc = 0x18B9ACu;
label_18b9ac:
    // 0x18b9ac: 0x92230028  lbu         $v1, 0x28($s1)
    ctx->pc = 0x18b9acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x18b9b0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b9b4: 0xa0430096  sb          $v1, 0x96($v0)
    ctx->pc = 0x18b9b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 150), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b9b8: 0x9223000d  lbu         $v1, 0xD($s1)
    ctx->pc = 0x18b9b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x18b9bc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b9c0: 0xa0430095  sb          $v1, 0x95($v0)
    ctx->pc = 0x18b9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 149), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b9c4: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x18b9c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x18b9c8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18b9c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b9cc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b9d0: 0x90420096  lbu         $v0, 0x96($v0)
    ctx->pc = 0x18b9d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 150)));
    // 0x18b9d4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x18b9d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b9d8: 0xc05e9b0  jal         func_17A6C0
    ctx->pc = 0x18B9D8u;
    SET_GPR_U32(ctx, 31, 0x18B9E0u);
    ctx->pc = 0x17A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A6C0u, 0x18B9D8u, 0x18B9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B9E0u;
label_18b9e0:
    // 0x18b9e0: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x18b9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x18b9e4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x18b9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b9e8: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x18b9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
    // 0x18b9ec: 0xa220000e  sb          $zero, 0xE($s1)
    ctx->pc = 0x18b9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x18b9f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b9f4: 0x92230028  lbu         $v1, 0x28($s1)
    ctx->pc = 0x18b9f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x18b9f8: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x18b9f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x18b9fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18ba00: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x18ba00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
label_18ba04:
    // 0x18ba04: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x18ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18ba08: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x18ba08u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18ba0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18ba0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ba10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18ba10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ba14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18ba14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ba18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ba18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ba1c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x18ba1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18ba20: 0x3e00008  jr          $ra
    ctx->pc = 0x18BA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BA28u;
}
