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

// Function: entry_00201534
// Address: 0x201534 - 0x2016f8
void entry_00201534_0x201534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201534_0x201534");
#endif

    ctx->pc = 0x201534u;

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
            return;
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
    ctx->pc = 0x2016f8u;
}
