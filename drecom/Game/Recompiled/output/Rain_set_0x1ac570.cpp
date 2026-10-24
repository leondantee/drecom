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

// Function: Rain_set
// Address: 0x1ac570 - 0x1ac6dc
void Rain_set_0x1ac570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Rain_set_0x1ac570");
#endif

    switch (ctx->pc) {
        case 0x1ac5f8u: goto label_1ac5f8;
        case 0x1ac644u: goto label_1ac644;
        case 0x1ac650u: goto label_1ac650;
        default: break;
    }

    ctx->pc = 0x1ac570u;

    // 0x1ac570: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ac570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ac574: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ac574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ac578: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ac578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ac57c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ac57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ac580: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ac580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ac584: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ac584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ac588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ac588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ac58c: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1ac58cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x1ac590: 0x2473f010  addiu       $s3, $v1, -0xFF0
    ctx->pc = 0x1ac590u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963216));
    // 0x1ac594: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1ac594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x1ac598: 0x2475f000  addiu       $s5, $v1, -0x1000
    ctx->pc = 0x1ac598u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963200));
    // 0x1ac59c: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ac59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ac5a0: 0x9023f001  lbu         $v1, -0xFFF($at)
    ctx->pc = 0x1ac5a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5EF001u));
    // 0x1ac5a4: 0x14600044  bnez        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x1AC5A4u;
    {
        const bool branch_taken_0x1ac5a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac5a4) {
            ctx->pc = 0x1AC6B8u;
            goto label_1ac6b8;
        }
    }
    ctx->pc = 0x1AC5ACu;
    // 0x1ac5ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac5b0: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ac5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ac5b4: 0xa023f001  sb          $v1, -0xFFF($at)
    ctx->pc = 0x1ac5b4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5EF001u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5EF001u, _value); } while (0);
    // 0x1ac5b8: 0x3c03c3a2  lui         $v1, 0xC3A2
    ctx->pc = 0x1ac5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50082 << 16));
    // 0x1ac5bc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1ac5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1ac5c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ac5c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ac5c4: 0x0  nop
    ctx->pc = 0x1ac5c4u;
    // NOP
    // 0x1ac5c8: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x1ac5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x1ac5cc: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x1ac5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x1ac5d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ac5d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ac5d4: 0x0  nop
    ctx->pc = 0x1ac5d4u;
    // NOP
    // 0x1ac5d8: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x1ac5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x1ac5dc: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1ac5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1ac5e0: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x1ac5e0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ac5e4: 0x26741d08  addiu       $s4, $s3, 0x1D08
    ctx->pc = 0x1ac5e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 7432));
    // 0x1ac5e8: 0x26947ff8  addiu       $s4, $s4, 0x7FF8
    ctx->pc = 0x1ac5e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32760));
    // 0x1ac5ec: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1ac5ecu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ac5f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1AC5F0u;
    {
        const bool branch_taken_0x1ac5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac5f0) {
            ctx->pc = 0x1AC608u;
            goto label_1ac608;
        }
    }
    ctx->pc = 0x1AC5F8u;
label_1ac5f8:
    // 0x1ac5f8: 0x72801e28  paddub      $v1, $s4, $zero
    ctx->pc = 0x1ac5f8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1ac5fc: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x1ac5fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ac600: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1ac600u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ac604: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ac604u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ac608:
    // 0x1ac608: 0x2e4307d0  sltiu       $v1, $s2, 0x7D0
    ctx->pc = 0x1ac608u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2000) ? 1 : 0);
    // 0x1ac60c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AC60Cu;
    {
        const bool branch_taken_0x1ac60c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac60c) {
            ctx->pc = 0x1AC5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac5f8;
        }
    }
    ctx->pc = 0x1AC614u;
    // 0x1ac614: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ac614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ac618: 0x8c230ae8  lw          $v1, 0xAE8($at)
    ctx->pc = 0x1ac618u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1ac61c: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x1ac61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1ac620: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1ac620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1ac624: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ac624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ac628: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ac628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ac62c: 0xac230ae8  sw          $v1, 0xAE8($at)
    ctx->pc = 0x1ac62cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1ac630: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ac630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ac634: 0x8c310ae8  lw          $s1, 0xAE8($at)
    ctx->pc = 0x1ac634u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1ac638: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1ac638u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ac63c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1AC63Cu;
    {
        const bool branch_taken_0x1ac63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac63c) {
            ctx->pc = 0x1AC690u;
            goto label_1ac690;
        }
    }
    ctx->pc = 0x1AC644u;
label_1ac644:
    // 0x1ac644: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1ac644u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ac648: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1AC648u;
    {
        const bool branch_taken_0x1ac648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac648) {
            ctx->pc = 0x1AC680u;
            goto label_1ac680;
        }
    }
    ctx->pc = 0x1AC650u;
label_1ac650:
    // 0x1ac650: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x1ac650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1ac654: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x1ac654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1ac658: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1ac658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ac65c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ac65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ac660: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ac660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ac664: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1ac664u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1ac668: 0xac31b470  sw          $s1, -0x4B90($at)
    ctx->pc = 0x1ac668u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947952), GPR_U32(ctx, 17));
    // 0x1ac66c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1ac66cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1ac670: 0x3463f400  ori         $v1, $v1, 0xF400
    ctx->pc = 0x1ac670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62464);
    // 0x1ac674: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x1ac674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1ac678: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ac678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ac67c: 0x0  nop
    ctx->pc = 0x1ac67cu;
    // NOP
label_1ac680:
    // 0x1ac680: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x1ac680u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ac684: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1AC684u;
    {
        const bool branch_taken_0x1ac684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac684) {
            ctx->pc = 0x1AC650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac650;
        }
    }
    ctx->pc = 0x1AC68Cu;
    // 0x1ac68c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ac68cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ac690:
    // 0x1ac690: 0x2e430002  sltiu       $v1, $s2, 0x2
    ctx->pc = 0x1ac690u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ac694: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1AC694u;
    {
        const bool branch_taken_0x1ac694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac694) {
            ctx->pc = 0x1AC644u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac644;
        }
    }
    ctx->pc = 0x1AC69Cu;
    // 0x1ac69c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1ac69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1ac6a0: 0x24650ae8  addiu       $a1, $v1, 0xAE8
    ctx->pc = 0x1ac6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x1ac6a4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1ac6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1ac6a8: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x1ac6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x1ac6ac: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x1ac6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x1ac6b0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ac6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ac6b4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1ac6b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
label_1ac6b8:
    // 0x1ac6b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ac6b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ac6bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ac6bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ac6c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ac6c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ac6c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ac6c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac6c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ac6c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac6cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ac6ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac6d0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1ac6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ac6d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC6D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC6DCu;
}
