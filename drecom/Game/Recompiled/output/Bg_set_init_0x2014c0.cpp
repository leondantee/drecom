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

// Function: Bg_set_init
// Address: 0x2014c0 - 0x201940
void Bg_set_init_0x2014c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Bg_set_init_0x2014c0");
#endif

    switch (ctx->pc) {
        case 0x2014fcu: goto label_2014fc;
        case 0x201534u: goto label_201534;
        default: break;
    }

    ctx->pc = 0x2014c0u;

    // 0x2014c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2014c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2014c4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2014c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2014c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2014c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2014cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2014ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2014d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2014d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2014d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2014d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2014d8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x2014d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x2014dc: 0x24740b10  addiu       $s4, $v1, 0xB10
    ctx->pc = 0x2014dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 2832));
    // 0x2014e0: 0x96830052  lhu         $v1, 0x52($s4)
    ctx->pc = 0x2014e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D0B62u));
    // 0x2014e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2014e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2014e8: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x2014e8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2014ec: 0x8e9202d0  lw          $s2, 0x2D0($s4)
    ctx->pc = 0x2014ecu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x5D0DE0u));
    // 0x2014f0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2014f0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2014f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2014F4u;
    {
        const bool branch_taken_0x2014f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2014f4) {
            ctx->pc = 0x201518u;
            goto label_201518;
        }
    }
    ctx->pc = 0x2014FCu;
label_2014fc:
    // 0x2014fc: 0x24034860  addiu       $v1, $zero, 0x4860
    ctx->pc = 0x2014fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18528));
    // 0x201500: 0x2032018  mult        $a0, $s0, $v1
    ctx->pc = 0x201500u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x201504: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x201504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x201508: 0x246370d0  addiu       $v1, $v1, 0x70D0
    ctx->pc = 0x201508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28880));
    // 0x20150c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20150cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201510: 0xa060485f  sb          $zero, 0x485F($v1)
    ctx->pc = 0x201510u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18527), (uint8_t)GPR_U32(ctx, 0));
    // 0x201514: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x201514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_201518:
    // 0x201518: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x201518u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x20151c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x20151Cu;
    {
        const bool branch_taken_0x20151c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20151c) {
            ctx->pc = 0x2014FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2014fc;
        }
    }
    ctx->pc = 0x201524u;
    // 0x201524: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x201524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x201528: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x201528u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20152c: 0x0  nop
    ctx->pc = 0x20152cu;
    // NOP
    // 0x201530: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x201530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_201534:
    // 0x201534: 0x8e5100a0  lw          $s1, 0xA0($s2)
    ctx->pc = 0x201534u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x201538: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x201538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x20153c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x20153cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x201540: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x201540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x201544: 0x1060006c  beqz        $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x201544u;
    {
        const bool branch_taken_0x201544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x201544) {
            ctx->pc = 0x2016F8u;
            goto label_2016f8;
        }
    }
    ctx->pc = 0x20154Cu;
    // 0x20154c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x20154cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x201550: 0x30700003  andi        $s0, $v1, 0x3
    ctx->pc = 0x201550u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x201554: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x201554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201558: 0x24034860  addiu       $v1, $zero, 0x4860
    ctx->pc = 0x201558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18528));
    // 0x20155c: 0x2032018  mult        $a0, $s0, $v1
    ctx->pc = 0x20155cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x201560: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x201560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x201564: 0x246370d0  addiu       $v1, $v1, 0x70D0
    ctx->pc = 0x201564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28880));
    // 0x201568: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x201568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20156c: 0xa065485f  sb          $a1, 0x485F($v1)
    ctx->pc = 0x20156cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18527), (uint8_t)GPR_U32(ctx, 5));
    // 0x201570: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x201570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x201574: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x201574u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x201578: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x201578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x20157c: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x20157cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x201580: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x201580u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x201584: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x201584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201588: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x201588u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x20158c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x20158cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x201590: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x201590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x201594: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x201594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201598: 0x24034860  addiu       $v1, $zero, 0x4860
    ctx->pc = 0x201598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18528));
    // 0x20159c: 0x2032018  mult        $a0, $s0, $v1
    ctx->pc = 0x20159cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2015a0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2015a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2015a4: 0x246370d0  addiu       $v1, $v1, 0x70D0
    ctx->pc = 0x2015a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28880));
    // 0x2015a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2015a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2015ac: 0xac654820  sw          $a1, 0x4820($v1)
    ctx->pc = 0x2015acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18464), GPR_U32(ctx, 5));
    // 0x2015b0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2015b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2015b4: 0x24034860  addiu       $v1, $zero, 0x4860
    ctx->pc = 0x2015b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18528));
    // 0x2015b8: 0x2032018  mult        $a0, $s0, $v1
    ctx->pc = 0x2015b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2015bc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2015bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2015c0: 0x246370d0  addiu       $v1, $v1, 0x70D0
    ctx->pc = 0x2015c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28880));
    // 0x2015c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2015c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2015c8: 0xac654824  sw          $a1, 0x4824($v1)
    ctx->pc = 0x2015c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18468), GPR_U32(ctx, 5));
    // 0x2015cc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2015ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2015d0: 0x24034860  addiu       $v1, $zero, 0x4860
    ctx->pc = 0x2015d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18528));
    // 0x2015d4: 0x2032018  mult        $a0, $s0, $v1
    ctx->pc = 0x2015d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2015d8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2015d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2015dc: 0x246370d0  addiu       $v1, $v1, 0x70D0
    ctx->pc = 0x2015dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28880));
    // 0x2015e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2015e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2015e4: 0xac654828  sw          $a1, 0x4828($v1)
    ctx->pc = 0x2015e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18472), GPR_U32(ctx, 5));
    // 0x2015e8: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x2015e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
    // 0x2015ec: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2015ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2015f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2015f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2015f4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2015f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2015f8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2015f8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2015fc: 0x24034860  addiu       $v1, $zero, 0x4860
    ctx->pc = 0x2015fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18528));
    // 0x201600: 0x2032018  mult        $a0, $s0, $v1
    ctx->pc = 0x201600u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x201604: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x201604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x201608: 0x246370d0  addiu       $v1, $v1, 0x70D0
    ctx->pc = 0x201608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28880));
    // 0x20160c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20160cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201610: 0xe4604830  swc1        $f0, 0x4830($v1)
    ctx->pc = 0x201610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 18480), bits); }
    // 0x201614: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x201614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x201618: 0x24034860  addiu       $v1, $zero, 0x4860
    ctx->pc = 0x201618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18528));
    // 0x20161c: 0x2032018  mult        $a0, $s0, $v1
    ctx->pc = 0x20161cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x201620: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x201620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x201624: 0x246370d0  addiu       $v1, $v1, 0x70D0
    ctx->pc = 0x201624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28880));
    // 0x201628: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x201628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20162c: 0xa065485c  sb          $a1, 0x485C($v1)
    ctx->pc = 0x20162cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18524), (uint8_t)GPR_U32(ctx, 5));
    // 0x201630: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x201630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x201634: 0x24034860  addiu       $v1, $zero, 0x4860
    ctx->pc = 0x201634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18528));
    // 0x201638: 0x2032018  mult        $a0, $s0, $v1
    ctx->pc = 0x201638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x20163c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x20163cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x201640: 0x246370d0  addiu       $v1, $v1, 0x70D0
    ctx->pc = 0x201640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28880));
    // 0x201644: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x201644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201648: 0xac654834  sw          $a1, 0x4834($v1)
    ctx->pc = 0x201648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18484), GPR_U32(ctx, 5));
    // 0x20164c: 0x24034860  addiu       $v1, $zero, 0x4860
    ctx->pc = 0x20164cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18528));
    // 0x201650: 0x2032018  mult        $a0, $s0, $v1
    ctx->pc = 0x201650u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x201654: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x201654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x201658: 0x246370d0  addiu       $v1, $v1, 0x70D0
    ctx->pc = 0x201658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28880));
    // 0x20165c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20165cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201660: 0xac60483c  sw          $zero, 0x483C($v1)
    ctx->pc = 0x201660u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18492), GPR_U32(ctx, 0));
    // 0x201664: 0x24034860  addiu       $v1, $zero, 0x4860
    ctx->pc = 0x201664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18528));
    // 0x201668: 0x2032018  mult        $a0, $s0, $v1
    ctx->pc = 0x201668u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x20166c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x20166cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x201670: 0x246370d0  addiu       $v1, $v1, 0x70D0
    ctx->pc = 0x201670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28880));
    // 0x201674: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x201674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201678: 0xac604840  sw          $zero, 0x4840($v1)
    ctx->pc = 0x201678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18496), GPR_U32(ctx, 0));
    // 0x20167c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20167cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201680: 0x24034860  addiu       $v1, $zero, 0x4860
    ctx->pc = 0x201680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18528));
    // 0x201684: 0x2032018  mult        $a0, $s0, $v1
    ctx->pc = 0x201684u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x201688: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x201688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x20168c: 0x246370d0  addiu       $v1, $v1, 0x70D0
    ctx->pc = 0x20168cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28880));
    // 0x201690: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x201690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201694: 0xa065485d  sb          $a1, 0x485D($v1)
    ctx->pc = 0x201694u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18525), (uint8_t)GPR_U32(ctx, 5));
    // 0x201698: 0x24034860  addiu       $v1, $zero, 0x4860
    ctx->pc = 0x201698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18528));
    // 0x20169c: 0x2032018  mult        $a0, $s0, $v1
    ctx->pc = 0x20169cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2016a0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2016a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2016a4: 0x246370d0  addiu       $v1, $v1, 0x70D0
    ctx->pc = 0x2016a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28880));
    // 0x2016a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2016a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2016ac: 0xac604844  sw          $zero, 0x4844($v1)
    ctx->pc = 0x2016acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18500), GPR_U32(ctx, 0));
    // 0x2016b0: 0x24034860  addiu       $v1, $zero, 0x4860
    ctx->pc = 0x2016b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18528));
    // 0x2016b4: 0x2032018  mult        $a0, $s0, $v1
    ctx->pc = 0x2016b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2016b8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2016b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2016bc: 0x246370d0  addiu       $v1, $v1, 0x70D0
    ctx->pc = 0x2016bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28880));
    // 0x2016c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2016c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2016c4: 0xac604848  sw          $zero, 0x4848($v1)
    ctx->pc = 0x2016c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18504), GPR_U32(ctx, 0));
    // 0x2016c8: 0x24034860  addiu       $v1, $zero, 0x4860
    ctx->pc = 0x2016c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18528));
    // 0x2016cc: 0x2032018  mult        $a0, $s0, $v1
    ctx->pc = 0x2016ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2016d0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2016d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2016d4: 0x246370d0  addiu       $v1, $v1, 0x70D0
    ctx->pc = 0x2016d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28880));
    // 0x2016d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2016d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2016dc: 0xa060485e  sb          $zero, 0x485E($v1)
    ctx->pc = 0x2016dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18526), (uint8_t)GPR_U32(ctx, 0));
    // 0x2016e0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2016e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2016e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2016e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2016e8: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2016e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2016ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2016ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2016f0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2016f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2016f4: 0x0  nop
    ctx->pc = 0x2016f4u;
    // NOP
label_2016f8:
    // 0x2016f8: 0x26520120  addiu       $s2, $s2, 0x120
    ctx->pc = 0x2016f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x2016fc: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x2016fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x201700: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x201700u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x201704: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x201704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x201708: 0x1460ff8a  bnez        $v1, . + 4 + (-0x76 << 2)
    ctx->pc = 0x201708u;
    {
        const bool branch_taken_0x201708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x201708) {
            ctx->pc = 0x201534u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201534;
        }
    }
    ctx->pc = 0x201710u;
    // 0x201710: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x201710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x201714: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x201714u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x201718: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x201718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20171c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x20171cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201720: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x201720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x201724: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x201724u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201728: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x201728u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x20172c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x20172cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x201730: 0x24630ad0  addiu       $v1, $v1, 0xAD0
    ctx->pc = 0x201730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2768));
    // 0x201734: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x201734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201738: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x20173c: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x20173cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x201740: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201744: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x201744u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201748: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x201748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x20174c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20174cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201750: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x201750u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x201754: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201758: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x201758u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x20175c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x20175cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x201760: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201764: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x201764u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x201768: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x20176c: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x20176cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201770: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x201770u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x201774: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x201774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x201778: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x20177c: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x20177cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201780: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x201780u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x201784: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201788: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x201788u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x20178c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x20178cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x201790: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201794: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x201794u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x201798: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x201798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x20179c: 0x3464080a  ori         $a0, $v1, 0x80A
    ctx->pc = 0x20179cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2058);
    // 0x2017a0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2017a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2017a4: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2017a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2017a8: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x2017a8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x2017ac: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x2017acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2017b0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2017b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2017b4: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2017b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2017b8: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x2017b8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x2017bc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2017bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2017c0: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2017c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2017c4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2017c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2017c8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2017c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2017cc: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x2017ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x2017d0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2017d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2017d4: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2017d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2017d8: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x2017d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x2017dc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2017dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2017e0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2017e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2017e4: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2017e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2017e8: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x2017e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x2017ec: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2017ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2017f0: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2017f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2017f4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2017f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2017f8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2017f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2017fc: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x2017fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x201800: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201804: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x201804u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201808: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x20180c: 0xac230ac0  sw          $v1, 0xAC0($at)
    ctx->pc = 0x20180cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AC0u, _value); } while (0);
    // 0x201810: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x201810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x201814: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x201814u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x201818: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x201818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20181c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x20181cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201820: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x201820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x201824: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x201824u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201828: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x201828u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x20182c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x20182cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x201830: 0x24630ad0  addiu       $v1, $v1, 0xAD0
    ctx->pc = 0x201830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2768));
    // 0x201834: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x201834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201838: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x201838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x20183c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20183cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201840: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x201840u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201844: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x201844u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201848: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x201848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20184c: 0x48102  srl         $s0, $a0, 4
    ctx->pc = 0x20184cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x201850: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x201850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x201854: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x201854u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x201858: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x201858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20185c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x20185cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201860: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x201860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x201864: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x201864u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201868: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x201868u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x20186c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x20186cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x201870: 0x24630ad0  addiu       $v1, $v1, 0xAD0
    ctx->pc = 0x201870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2768));
    // 0x201874: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x201874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201878: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x20187c: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x20187cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x201880: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x201880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x201884: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x201884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x201888: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x201888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x20188c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x20188cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x201890: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x201890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x201894: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201898: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x201898u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x20189c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x20189cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x2018a0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2018a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2018a4: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2018a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2018a8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2018a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2018ac: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x2018acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2018b0: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x2018b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x2018b4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2018b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2018b8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2018b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2018bc: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2018bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2018c0: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x2018c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x2018c4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2018c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2018c8: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2018c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2018cc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2018ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2018d0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2018d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2018d4: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x2018d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x2018d8: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x2018d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2018dc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2018dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2018e0: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x2018e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2018e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2018e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2018e8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2018e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2018ec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2018ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2018f0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2018f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2018f4: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2018f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2018f8: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x2018f8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x2018fc: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2018fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x201900: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201904: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x201904u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201908: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x201908u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x20190c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20190cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201910: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x201910u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201914: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x201914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x201918: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x20191c: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x20191cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x201920: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x201920u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x201924: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x201924u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x201928: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x201928u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20192c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20192cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201930: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x201930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201934: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x201934u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x201938: 0x3e00008  jr          $ra
    ctx->pc = 0x201938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201940u;
}
