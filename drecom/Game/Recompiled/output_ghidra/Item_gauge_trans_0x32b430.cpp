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

// Function: Item_gauge_trans
// Address: 0x32b430 - 0x32c178
void Item_gauge_trans_0x32b430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Item_gauge_trans_0x32b430");
#endif

    switch (ctx->pc) {
        case 0x32b54cu: goto label_32b54c;
        case 0x32b5a4u: goto label_32b5a4;
        case 0x32b614u: goto label_32b614;
        case 0x32b640u: goto label_32b640;
        case 0x32b67cu: goto label_32b67c;
        case 0x32b69cu: goto label_32b69c;
        case 0x32b6c0u: goto label_32b6c0;
        case 0x32b6e0u: goto label_32b6e0;
        case 0x32b710u: goto label_32b710;
        case 0x32b838u: goto label_32b838;
        case 0x32b880u: goto label_32b880;
        case 0x32b9b8u: goto label_32b9b8;
        case 0x32ba00u: goto label_32ba00;
        case 0x32baf8u: goto label_32baf8;
        case 0x32bb40u: goto label_32bb40;
        case 0x32bbc8u: goto label_32bbc8;
        case 0x32bbf8u: goto label_32bbf8;
        case 0x32bc8cu: goto label_32bc8c;
        case 0x32bc98u: goto label_32bc98;
        case 0x32bd48u: goto label_32bd48;
        case 0x32bd6cu: goto label_32bd6c;
        case 0x32bd90u: goto label_32bd90;
        case 0x32bdb4u: goto label_32bdb4;
        case 0x32bf54u: goto label_32bf54;
        case 0x32bfd4u: goto label_32bfd4;
        case 0x32c070u: goto label_32c070;
        case 0x32c0c4u: goto label_32c0c4;
        case 0x32c0fcu: goto label_32c0fc;
        case 0x32c13cu: goto label_32c13c;
        default: break;
    }

    ctx->pc = 0x32b430u;

    // 0x32b430: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x32b430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x32b434: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x32b434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x32b438: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x32b438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x32b43c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x32b43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x32b440: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x32b440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x32b444: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x32b444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x32b448: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x32b448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x32b44c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32b44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32b450: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32b450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32b454: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32b454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32b458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32b458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32b45c: 0x3c030086  lui         $v1, 0x86
    ctx->pc = 0x32b45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)134 << 16));
    // 0x32b460: 0x2463c2f0  addiu       $v1, $v1, -0x3D10
    ctx->pc = 0x32b460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951664));
    // 0x32b464: 0x7060b628  paddub      $s6, $v1, $zero
    ctx->pc = 0x32b464u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32b468: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x32b468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x32b46c: 0x2463a4f0  addiu       $v1, $v1, -0x5B10
    ctx->pc = 0x32b46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943984));
    // 0x32b470: 0x27b400a0  addiu       $s4, $sp, 0xA0
    ctx->pc = 0x32b470u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x32b474: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x32b474u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x39A4F0u));
    // 0x32b478: 0x7e830000  sq          $v1, 0x0($s4)
    ctx->pc = 0x32b478u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 3));
    // 0x32b47c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32b47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32b480: 0x8c261a3c  lw          $a2, 0x1A3C($at)
    ctx->pc = 0x32b480u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x32b484: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x32b484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x32b488: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x32b488u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x32b48c: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x32B48Cu;
    {
        const bool branch_taken_0x32b48c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b48c) {
            ctx->pc = 0x32B4B4u;
            goto label_32b4b4;
        }
    }
    ctx->pc = 0x32B494u;
    // 0x32b494: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x32b494u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b498: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b49c: 0xac33b990  sw          $s3, -0x4670($at)
    ctx->pc = 0x32b49cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x85B990u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85B990u, _value); } while (0);
    // 0x32b4a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32b4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b4a4: 0xa2c328b9  sb          $v1, 0x28B9($s6)
    ctx->pc = 0x32b4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 10425), (uint8_t)GPR_U32(ctx, 3));
    // 0x32b4a8: 0xa2c028c0  sb          $zero, 0x28C0($s6)
    ctx->pc = 0x32b4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 10432), (uint8_t)GPR_U32(ctx, 0));
    // 0x32b4ac: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x32b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x32b4b0: 0xaec328c4  sw          $v1, 0x28C4($s6)
    ctx->pc = 0x32b4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 10436), GPR_U32(ctx, 3));
label_32b4b4:
    // 0x32b4b4: 0x92d428b9  lbu         $s4, 0x28B9($s6)
    ctx->pc = 0x32b4b4u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 10425)));
    // 0x32b4b8: 0x328600ff  andi        $a2, $s4, 0xFF
    ctx->pc = 0x32b4b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x32b4bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32b4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b4c0: 0x10c3000b  beq         $a2, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x32B4C0u;
    {
        const bool branch_taken_0x32b4c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x32b4c0) {
            ctx->pc = 0x32B4F0u;
            goto label_32b4f0;
        }
    }
    ctx->pc = 0x32B4C8u;
    // 0x32b4c8: 0x92c328c0  lbu         $v1, 0x28C0($s6)
    ctx->pc = 0x32b4c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 10432)));
    // 0x32b4cc: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x32b4ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b4d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b4d4: 0x14c3031b  bne         $a2, $v1, . + 4 + (0x31B << 2)
    ctx->pc = 0x32B4D4u;
    {
        const bool branch_taken_0x32b4d4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x32b4d4) {
            ctx->pc = 0x32C144u;
            goto label_32c144;
        }
    }
    ctx->pc = 0x32B4DCu;
    // 0x32b4dc: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x32b4dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x32b4e0: 0x9026c78d  lbu         $a2, -0x3873($at)
    ctx->pc = 0x32b4e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x62C78Du));
    // 0x32b4e4: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x32b4e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x32b4e8: 0x14600316  bnez        $v1, . + 4 + (0x316 << 2)
    ctx->pc = 0x32B4E8u;
    {
        const bool branch_taken_0x32b4e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32b4e8) {
            ctx->pc = 0x32C144u;
            goto label_32c144;
        }
    }
    ctx->pc = 0x32B4F0u;
label_32b4f0:
    // 0x32b4f0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32b4f4: 0x2455a5d8  addiu       $s5, $v0, -0x5A28
    ctx->pc = 0x32b4f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944216));
    // 0x32b4f8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x32b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A5D8u));
    // 0x32b4fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b4fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b500: 0x0  nop
    ctx->pc = 0x32b500u;
    // NOP
    // 0x32b504: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x32b504u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32b508: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x32b508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x32b50c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32b50cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32b510: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x32b510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x32b514: 0xc420c770  lwc1        $f0, -0x3890($at)
    ctx->pc = 0x32b514u;
    { uint32_t bits = FAST_READ32(0x62C770u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32b518: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x32b518u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x32b51c: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x32b51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x32b520: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32b520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b524: 0x0  nop
    ctx->pc = 0x32b524u;
    // NOP
    // 0x32b528: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x32b528u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32b52c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32b530: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x32b530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32b534: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b534u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b538: 0x0  nop
    ctx->pc = 0x32b538u;
    // NOP
    // 0x32b53c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32b53cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32b540: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x32b540u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x32b544: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32B544u;
    SET_GPR_U32(ctx, 31, 0x32B54Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32B544u, 0x32B54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B54Cu;
label_32b54c:
    // 0x32b54c: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x32b54cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32b550: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x32b550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x32b554: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32b554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b558: 0x0  nop
    ctx->pc = 0x32b558u;
    // NOP
    // 0x32b55c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x32b55cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32b560: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x32b560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x32b564: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32b564u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32b568: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x32b568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x32b56c: 0xc420c770  lwc1        $f0, -0x3890($at)
    ctx->pc = 0x32b56cu;
    { uint32_t bits = FAST_READ32(0x62C770u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32b570: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x32b570u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x32b574: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x32b574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x32b578: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32b578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b57c: 0x0  nop
    ctx->pc = 0x32b57cu;
    // NOP
    // 0x32b580: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x32b580u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32b584: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32b584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32b588: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x32b588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32b58c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b58cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b590: 0x0  nop
    ctx->pc = 0x32b590u;
    // NOP
    // 0x32b594: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32b594u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32b598: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x32b598u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x32b59c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32B59Cu;
    SET_GPR_U32(ctx, 31, 0x32B5A4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32B59Cu, 0x32B5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B5A4u;
label_32b5a4:
    // 0x32b5a4: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x32b5a4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32b5a8: 0x92c228ba  lbu         $v0, 0x28BA($s6)
    ctx->pc = 0x32b5a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 10426)));
    // 0x32b5ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32b5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32b5b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32b5b4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x32b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x32b5b8: 0xc44128f0  lwc1        $f1, 0x28F0($v0)
    ctx->pc = 0x32b5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32b5bc: 0x3c024479  lui         $v0, 0x4479
    ctx->pc = 0x32b5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17529 << 16));
    // 0x32b5c0: 0x3443c000  ori         $v1, $v0, 0xC000
    ctx->pc = 0x32b5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x32b5c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b5c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b5c8: 0x0  nop
    ctx->pc = 0x32b5c8u;
    // NOP
    // 0x32b5cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32b5ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b5d0: 0x0  nop
    ctx->pc = 0x32b5d0u;
    // NOP
    // 0x32b5d4: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x32B5D4u;
    {
        const bool branch_taken_0x32b5d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32b5d4) {
            ctx->pc = 0x32B648u;
            goto label_32b648;
        }
    }
    ctx->pc = 0x32B5DCu;
    // 0x32b5dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32b5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32b5e0: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x32b5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x32b5e4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x32b5e8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x32b5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32b5ec: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x32B5ECu;
    {
        const bool branch_taken_0x32b5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32b5ec) {
            ctx->pc = 0x32B61Cu;
            goto label_32b61c;
        }
    }
    ctx->pc = 0x32B5F4u;
    // 0x32b5f4: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x32b5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x32b5f8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x32b5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x32b5fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x32b5fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32b600: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x32b600u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x32b604: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x32b604u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x32b608: 0x240603e7  addiu       $a2, $zero, 0x3E7
    ctx->pc = 0x32b608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x32b60c: 0xc0ca3d8  jal         func_328F60
    ctx->pc = 0x32B60Cu;
    SET_GPR_U32(ctx, 31, 0x32B614u);
    ctx->pc = 0x328F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328F60u, 0x32B60Cu, 0x32B614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B614u;
label_32b614:
    // 0x32b614: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x32B614u;
    {
        const bool branch_taken_0x32b614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b614) {
            ctx->pc = 0x32B6E0u;
            goto label_32b6e0;
        }
    }
    ctx->pc = 0x32B61Cu;
label_32b61c:
    // 0x32b61c: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x32b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x32b620: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x32b620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x32b624: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x32b624u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32b628: 0x26620176  addiu       $v0, $s3, 0x176
    ctx->pc = 0x32b628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 374));
    // 0x32b62c: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x32b62cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x32b630: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x32b630u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32b634: 0x240603e7  addiu       $a2, $zero, 0x3E7
    ctx->pc = 0x32b634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x32b638: 0xc0ca3d8  jal         func_328F60
    ctx->pc = 0x32B638u;
    SET_GPR_U32(ctx, 31, 0x32B640u);
    ctx->pc = 0x328F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328F60u, 0x32B638u, 0x32B640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B640u;
label_32b640:
    // 0x32b640: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x32B640u;
    {
        const bool branch_taken_0x32b640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b640) {
            ctx->pc = 0x32B6E0u;
            goto label_32b6e0;
        }
    }
    ctx->pc = 0x32B648u;
label_32b648:
    // 0x32b648: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32b648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32b64c: 0x8c221a3c  lw          $v0, 0x1A3C($at)
    ctx->pc = 0x32b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x32b650: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x32b650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x32b654: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x32b654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x32b658: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x32B658u;
    {
        const bool branch_taken_0x32b658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32b658) {
            ctx->pc = 0x32B6A4u;
            goto label_32b6a4;
        }
    }
    ctx->pc = 0x32B660u;
    // 0x32b660: 0x92c228ba  lbu         $v0, 0x28BA($s6)
    ctx->pc = 0x32b660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 10426)));
    // 0x32b664: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32b664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32b668: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32b668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32b66c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x32b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x32b670: 0xc44c28f0  lwc1        $f12, 0x28F0($v0)
    ctx->pc = 0x32b670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32b674: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32B674u;
    SET_GPR_U32(ctx, 31, 0x32B67Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32B674u, 0x32B67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B67Cu;
label_32b67c:
    // 0x32b67c: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x32b67cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x32b680: 0x34643333  ori         $a0, $v1, 0x3333
    ctx->pc = 0x32b680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x32b684: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x32b684u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32b688: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x32b688u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x32b68c: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x32b68cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x32b690: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x32b690u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32b694: 0xc0ca3d8  jal         func_328F60
    ctx->pc = 0x32B694u;
    SET_GPR_U32(ctx, 31, 0x32B69Cu);
    ctx->pc = 0x328F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328F60u, 0x32B694u, 0x32B69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B69Cu;
label_32b69c:
    // 0x32b69c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x32B69Cu;
    {
        const bool branch_taken_0x32b69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b69c) {
            ctx->pc = 0x32B6E0u;
            goto label_32b6e0;
        }
    }
    ctx->pc = 0x32B6A4u;
label_32b6a4:
    // 0x32b6a4: 0x92c328ba  lbu         $v1, 0x28BA($s6)
    ctx->pc = 0x32b6a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 10426)));
    // 0x32b6a8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x32b6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b6ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x32b6acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32b6b0: 0x2c31021  addu        $v0, $s6, $v1
    ctx->pc = 0x32b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x32b6b4: 0xc44c28f0  lwc1        $f12, 0x28F0($v0)
    ctx->pc = 0x32b6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32b6b8: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32B6B8u;
    SET_GPR_U32(ctx, 31, 0x32B6C0u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32B6B8u, 0x32B6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B6C0u;
label_32b6c0:
    // 0x32b6c0: 0x26650176  addiu       $a1, $s3, 0x176
    ctx->pc = 0x32b6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 374));
    // 0x32b6c4: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x32b6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x32b6c8: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x32b6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x32b6cc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x32b6ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32b6d0: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x32b6d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x32b6d4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x32b6d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32b6d8: 0xc0ca3d8  jal         func_328F60
    ctx->pc = 0x32B6D8u;
    SET_GPR_U32(ctx, 31, 0x32B6E0u);
    ctx->pc = 0x328F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328F60u, 0x32B6D8u, 0x32B6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B6E0u;
label_32b6e0:
    // 0x32b6e0: 0x3c030086  lui         $v1, 0x86
    ctx->pc = 0x32b6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)134 << 16));
    // 0x32b6e4: 0x2462b350  addiu       $v0, $v1, -0x4CB0
    ctx->pc = 0x32b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947664));
    // 0x32b6e8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x32b6e8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32b6ec: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x32b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x32b6f0: 0x2442b610  addiu       $v0, $v0, -0x49F0
    ctx->pc = 0x32b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
    // 0x32b6f4: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x32b6f4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32b6f8: 0x3c030086  lui         $v1, 0x86
    ctx->pc = 0x32b6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)134 << 16));
    // 0x32b6fc: 0x2462b710  addiu       $v0, $v1, -0x48F0
    ctx->pc = 0x32b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948624));
    // 0x32b700: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x32b700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x32b704: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x32b704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x32b708: 0x1000025f  b           . + 4 + (0x25F << 2)
    ctx->pc = 0x32B708u;
    {
        const bool branch_taken_0x32b708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b708) {
            ctx->pc = 0x32C088u;
            goto label_32c088;
        }
    }
    ctx->pc = 0x32B710u;
label_32b710:
    // 0x32b710: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32b710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32b714: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x32b714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x32b718: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x32b718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x32b71c: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x32b71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x32b720: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x32b720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x32b724: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x32b724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x32b728: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x32b728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32b72c: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x32b72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x32b730: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x32b730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x32b734: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32b734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32b738: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x32b738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x32b73c: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x32b73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x32b740: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x32b740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x32b744: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x32b744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x32b748: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x32b748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x32b74c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32b750: 0x106200df  beq         $v1, $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x32B750u;
    {
        const bool branch_taken_0x32b750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32b750) {
            ctx->pc = 0x32BAD0u;
            goto label_32bad0;
        }
    }
    ctx->pc = 0x32B758u;
    // 0x32b758: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32b758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b75c: 0x10620060  beq         $v1, $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x32B75Cu;
    {
        const bool branch_taken_0x32b75c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32b75c) {
            ctx->pc = 0x32B8E0u;
            goto label_32b8e0;
        }
    }
    ctx->pc = 0x32B764u;
    // 0x32b764: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32B764u;
    {
        const bool branch_taken_0x32b764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b764) {
            ctx->pc = 0x32B774u;
            goto label_32b774;
        }
    }
    ctx->pc = 0x32B76Cu;
    // 0x32b76c: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x32B76Cu;
    {
        const bool branch_taken_0x32b76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b76c) {
            ctx->pc = 0x32BBA0u;
            goto label_32bba0;
        }
    }
    ctx->pc = 0x32B774u;
label_32b774:
    // 0x32b774: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32b774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32b778: 0x2455a5c8  addiu       $s5, $v0, -0x5A38
    ctx->pc = 0x32b778u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944200));
    // 0x32b77c: 0x92c228ba  lbu         $v0, 0x28BA($s6)
    ctx->pc = 0x32b77cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 10426)));
    // 0x32b780: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x32b780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32b784: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32b784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32b788: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x32B788u;
    {
        const bool branch_taken_0x32b788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x32b788) {
            ctx->pc = 0x32B7E4u;
            goto label_32b7e4;
        }
    }
    ctx->pc = 0x32B790u;
    // 0x32b790: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32b790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32b794: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x32B794u;
    {
        const bool branch_taken_0x32b794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x32b794) {
            ctx->pc = 0x32B7E4u;
            goto label_32b7e4;
        }
    }
    ctx->pc = 0x32B79Cu;
    // 0x32b79c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32b7a0: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x32B7A0u;
    {
        const bool branch_taken_0x32b7a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32b7a0) {
            ctx->pc = 0x32B7E4u;
            goto label_32b7e4;
        }
    }
    ctx->pc = 0x32B7A8u;
    // 0x32b7a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b7ac: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x32B7ACu;
    {
        const bool branch_taken_0x32b7ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x32b7ac) {
            ctx->pc = 0x32B7D4u;
            goto label_32b7d4;
        }
    }
    ctx->pc = 0x32B7B4u;
    // 0x32b7b4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32B7B4u;
    {
        const bool branch_taken_0x32b7b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b7b4) {
            ctx->pc = 0x32B7C4u;
            goto label_32b7c4;
        }
    }
    ctx->pc = 0x32B7BCu;
    // 0x32b7bc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x32B7BCu;
    {
        const bool branch_taken_0x32b7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b7bc) {
            ctx->pc = 0x32B7F4u;
            goto label_32b7f4;
        }
    }
    ctx->pc = 0x32B7C4u;
label_32b7c4:
    // 0x32b7c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b7c8: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x32b7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x32b7cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x32B7CCu;
    {
        const bool branch_taken_0x32b7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b7cc) {
            ctx->pc = 0x32B800u;
            goto label_32b800;
        }
    }
    ctx->pc = 0x32B7D4u;
label_32b7d4:
    // 0x32b7d4: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x32b7d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32b7d8: 0xafb300bc  sw          $s3, 0xBC($sp)
    ctx->pc = 0x32b7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 19));
    // 0x32b7dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32B7DCu;
    {
        const bool branch_taken_0x32b7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b7dc) {
            ctx->pc = 0x32B800u;
            goto label_32b800;
        }
    }
    ctx->pc = 0x32B7E4u;
label_32b7e4:
    // 0x32b7e4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32b7e8: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x32b7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x32b7ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32B7ECu;
    {
        const bool branch_taken_0x32b7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b7ec) {
            ctx->pc = 0x32B800u;
            goto label_32b800;
        }
    }
    ctx->pc = 0x32B7F4u;
label_32b7f4:
    // 0x32b7f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b7f8: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x32b7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x32b7fc: 0x0  nop
    ctx->pc = 0x32b7fcu;
    // NOP
label_32b800:
    // 0x32b800: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x32b800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x32b804: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32b804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b808: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x32b808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32b80c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x32b80cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32b810: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32b810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32b814: 0x2442a500  addiu       $v0, $v0, -0x5B00
    ctx->pc = 0x32b814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944000));
    // 0x32b818: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32b818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32b81c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x32b81cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32b820: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x32b820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x32b824: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x32b824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x32b828: 0x2445e8c0  addiu       $a1, $v0, -0x1740
    ctx->pc = 0x32b828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961344));
    // 0x32b82c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x32b82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x32b830: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x32B830u;
    SET_GPR_U32(ctx, 31, 0x32B838u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x32B838u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32B838u) { return; }
    ctx->pc = 0x32B838u;
label_32b838:
    // 0x32b838: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x32b838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x32b83c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x32b83cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x32b840: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x32b840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x32b844: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b844u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b848: 0x0  nop
    ctx->pc = 0x32b848u;
    // NOP
    // 0x32b84c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x32b84cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32b850: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x32b850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x32b854: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32b854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32b858: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x32b858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x32b85c: 0xc420c770  lwc1        $f0, -0x3890($at)
    ctx->pc = 0x32b85cu;
    { uint32_t bits = FAST_READ32(0x62C770u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32b860: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x32b860u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x32b864: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x32b864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x32b868: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32b868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b86c: 0x0  nop
    ctx->pc = 0x32b86cu;
    // NOP
    // 0x32b870: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32b870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32b874: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x32b874u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x32b878: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32B878u;
    SET_GPR_U32(ctx, 31, 0x32B880u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32B878u, 0x32B880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B880u;
label_32b880:
    // 0x32b880: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x32b880u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32b884: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x32b884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x32b888: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x32b888u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32b88c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x32b88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32b890: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x32b890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32b894: 0x62f023  subu        $fp, $v1, $v0
    ctx->pc = 0x32b894u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32b898: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x32b898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x32b89c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x32b89cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32b8a0: 0x46b823  subu        $s7, $v0, $a2
    ctx->pc = 0x32b8a0u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x32b8a4: 0xafb400b4  sw          $s4, 0xB4($sp)
    ctx->pc = 0x32b8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 20));
    // 0x32b8a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32b8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32b8ac: 0x171043  sra         $v0, $s7, 1
    ctx->pc = 0x32b8acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 23), 1));
    // 0x32b8b0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x32b8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x32b8b4: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x32b8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x32b8b8: 0x29e1823  subu        $v1, $s4, $fp
    ctx->pc = 0x32b8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 30)));
    // 0x32b8bc: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x32b8bcu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32b8c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32b8c4: 0x173843  sra         $a3, $s7, 1
    ctx->pc = 0x32b8c4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 23), 1));
    // 0x32b8c8: 0x70e01628  paddub      $v0, $a3, $zero
    ctx->pc = 0x32b8c8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x32b8cc: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x32b8ccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32b8d0: 0x2673823  subu        $a3, $s3, $a3
    ctx->pc = 0x32b8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x32b8d4: 0x70e09e28  paddub      $s3, $a3, $zero
    ctx->pc = 0x32b8d4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x32b8d8: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x32B8D8u;
    {
        const bool branch_taken_0x32b8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b8d8) {
            ctx->pc = 0x32BBA0u;
            goto label_32bba0;
        }
    }
    ctx->pc = 0x32B8E0u;
label_32b8e0:
    // 0x32b8e0: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x32b8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x32b8e4: 0x2495a5d0  addiu       $s5, $a0, -0x5A30
    ctx->pc = 0x32b8e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944208));
    // 0x32b8e8: 0x92c428ba  lbu         $a0, 0x28BA($s6)
    ctx->pc = 0x32b8e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 10426)));
    // 0x32b8ec: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x32b8ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x32b8f0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x32b8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32b8f4: 0x10a3001c  beq         $a1, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x32B8F4u;
    {
        const bool branch_taken_0x32b8f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x32b8f4) {
            ctx->pc = 0x32B968u;
            goto label_32b968;
        }
    }
    ctx->pc = 0x32B8FCu;
    // 0x32b8fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32b8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32b900: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x32B900u;
    {
        const bool branch_taken_0x32b900 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x32b900) {
            ctx->pc = 0x32B958u;
            goto label_32b958;
        }
    }
    ctx->pc = 0x32B908u;
    // 0x32b908: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32b908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32b90c: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x32B90Cu;
    {
        const bool branch_taken_0x32b90c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x32b90c) {
            ctx->pc = 0x32B948u;
            goto label_32b948;
        }
    }
    ctx->pc = 0x32B914u;
    // 0x32b914: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32b914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b918: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32B918u;
    {
        const bool branch_taken_0x32b918 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x32b918) {
            ctx->pc = 0x32B93Cu;
            goto label_32b93c;
        }
    }
    ctx->pc = 0x32B920u;
    // 0x32b920: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32B920u;
    {
        const bool branch_taken_0x32b920 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b920) {
            ctx->pc = 0x32B930u;
            goto label_32b930;
        }
    }
    ctx->pc = 0x32B928u;
    // 0x32b928: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x32B928u;
    {
        const bool branch_taken_0x32b928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b928) {
            ctx->pc = 0x32B978u;
            goto label_32b978;
        }
    }
    ctx->pc = 0x32B930u;
label_32b930:
    // 0x32b930: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x32b930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x32b934: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x32B934u;
    {
        const bool branch_taken_0x32b934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b934) {
            ctx->pc = 0x32B980u;
            goto label_32b980;
        }
    }
    ctx->pc = 0x32B93Cu;
label_32b93c:
    // 0x32b93c: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x32b93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x32b940: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x32B940u;
    {
        const bool branch_taken_0x32b940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b940) {
            ctx->pc = 0x32B980u;
            goto label_32b980;
        }
    }
    ctx->pc = 0x32B948u;
label_32b948:
    // 0x32b948: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32b948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b94c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x32b94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x32b950: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x32B950u;
    {
        const bool branch_taken_0x32b950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b950) {
            ctx->pc = 0x32B980u;
            goto label_32b980;
        }
    }
    ctx->pc = 0x32B958u;
label_32b958:
    // 0x32b958: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32b958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32b95c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x32b95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x32b960: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32B960u;
    {
        const bool branch_taken_0x32b960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b960) {
            ctx->pc = 0x32B980u;
            goto label_32b980;
        }
    }
    ctx->pc = 0x32B968u;
label_32b968:
    // 0x32b968: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32b968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32b96c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x32b96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x32b970: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32B970u;
    {
        const bool branch_taken_0x32b970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b970) {
            ctx->pc = 0x32B980u;
            goto label_32b980;
        }
    }
    ctx->pc = 0x32B978u;
label_32b978:
    // 0x32b978: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x32b978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x32b97c: 0x0  nop
    ctx->pc = 0x32b97cu;
    // NOP
label_32b980:
    // 0x32b980: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x32b980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x32b984: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32b984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b988: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32b988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32b98c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x32b98cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32b990: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x32b990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x32b994: 0x2462a570  addiu       $v0, $v1, -0x5A90
    ctx->pc = 0x32b994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944112));
    // 0x32b998: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32b998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32b99c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x32b99cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32b9a0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x32b9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x32b9a4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x32b9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x32b9a8: 0x2465e8e8  addiu       $a1, $v1, -0x1718
    ctx->pc = 0x32b9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961384));
    // 0x32b9ac: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x32b9acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x32b9b0: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x32B9B0u;
    SET_GPR_U32(ctx, 31, 0x32B9B8u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x32B9B8u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32B9B8u) { return; }
    ctx->pc = 0x32B9B8u;
label_32b9b8:
    // 0x32b9b8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x32b9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x32b9bc: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x32b9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x32b9c0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x32b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x32b9c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32b9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b9c8: 0x0  nop
    ctx->pc = 0x32b9c8u;
    // NOP
    // 0x32b9cc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x32b9ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32b9d0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x32b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x32b9d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32b9d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32b9d8: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x32b9d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x32b9dc: 0xc420c770  lwc1        $f0, -0x3890($at)
    ctx->pc = 0x32b9dcu;
    { uint32_t bits = FAST_READ32(0x62C770u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32b9e0: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x32b9e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x32b9e4: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x32b9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x32b9e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32b9e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b9ec: 0x0  nop
    ctx->pc = 0x32b9ecu;
    // NOP
    // 0x32b9f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32b9f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32b9f4: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x32b9f4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x32b9f8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32B9F8u;
    SET_GPR_U32(ctx, 31, 0x32BA00u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32B9F8u, 0x32BA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BA00u;
label_32ba00:
    // 0x32ba00: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x32ba00u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32ba04: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x32ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x32ba08: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x32ba08u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32ba0c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x32ba0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32ba10: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x32ba10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32ba14: 0x62f023  subu        $fp, $v1, $v0
    ctx->pc = 0x32ba14u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32ba18: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x32ba18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x32ba1c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x32ba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32ba20: 0x62b823  subu        $s7, $v1, $v0
    ctx->pc = 0x32ba20u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32ba24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32ba24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32ba28: 0x1e1843  sra         $v1, $fp, 1
    ctx->pc = 0x32ba28u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 30), 1));
    // 0x32ba2c: 0x2831021  addu        $v0, $s4, $v1
    ctx->pc = 0x32ba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x32ba30: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x32ba30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x32ba34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32ba38: 0x171843  sra         $v1, $s7, 1
    ctx->pc = 0x32ba38u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 23), 1));
    // 0x32ba3c: 0x70601628  paddub      $v0, $v1, $zero
    ctx->pc = 0x32ba3cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32ba40: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x32ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x32ba44: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x32ba44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x32ba48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32ba4c: 0x1e1043  sra         $v0, $fp, 1
    ctx->pc = 0x32ba4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 30), 1));
    // 0x32ba50: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x32ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x32ba54: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x32ba54u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32ba58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32ba5c: 0x171043  sra         $v0, $s7, 1
    ctx->pc = 0x32ba5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 23), 1));
    // 0x32ba60: 0x2629823  subu        $s3, $s3, $v0
    ctx->pc = 0x32ba60u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x32ba64: 0x92c228ba  lbu         $v0, 0x28BA($s6)
    ctx->pc = 0x32ba64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 10426)));
    // 0x32ba68: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x32ba68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32ba6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32ba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32ba70: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x32BA70u;
    {
        const bool branch_taken_0x32ba70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32ba70) {
            ctx->pc = 0x32BAB0u;
            goto label_32bab0;
        }
    }
    ctx->pc = 0x32BA78u;
    // 0x32ba78: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32BA78u;
    {
        const bool branch_taken_0x32ba78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ba78) {
            ctx->pc = 0x32BA88u;
            goto label_32ba88;
        }
    }
    ctx->pc = 0x32BA80u;
    // 0x32ba80: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x32BA80u;
    {
        const bool branch_taken_0x32ba80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ba80) {
            ctx->pc = 0x32BBA0u;
            goto label_32bba0;
        }
    }
    ctx->pc = 0x32BA88u;
label_32ba88:
    // 0x32ba88: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32ba88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32ba8c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x32ba8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x32ba90: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32ba94: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x32ba94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x32ba98: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32ba9c: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x32ba9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x32baa0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32baa4: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x32baa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x32baa8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x32BAA8u;
    {
        const bool branch_taken_0x32baa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32baa8) {
            ctx->pc = 0x32BBA0u;
            goto label_32bba0;
        }
    }
    ctx->pc = 0x32BAB0u;
label_32bab0:
    // 0x32bab0: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x32bab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x32bab4: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x32bab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x32bab8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32babc: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x32babcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x32bac0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32bac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32bac4: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x32bac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x32bac8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x32BAC8u;
    {
        const bool branch_taken_0x32bac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32bac8) {
            ctx->pc = 0x32BBA0u;
            goto label_32bba0;
        }
    }
    ctx->pc = 0x32BAD0u;
label_32bad0:
    // 0x32bad0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32bad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32bad4: 0x2455a5c0  addiu       $s5, $v0, -0x5A40
    ctx->pc = 0x32bad4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944192));
    // 0x32bad8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x32bad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x32badc: 0x2490a500  addiu       $s0, $a0, -0x5B00
    ctx->pc = 0x32badcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944000));
    // 0x32bae0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x32bae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x32bae4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x32bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x32bae8: 0x2445e8c0  addiu       $a1, $v0, -0x1740
    ctx->pc = 0x32bae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961344));
    // 0x32baec: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x32baecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x32baf0: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x32BAF0u;
    SET_GPR_U32(ctx, 31, 0x32BAF8u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x32BAF8u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32BAF8u) { return; }
    ctx->pc = 0x32BAF8u;
label_32baf8:
    // 0x32baf8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x32baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x32bafc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x32bafcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x32bb00: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x32bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x32bb04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32bb04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bb08: 0x0  nop
    ctx->pc = 0x32bb08u;
    // NOP
    // 0x32bb0c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x32bb0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32bb10: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x32bb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x32bb14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32bb14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32bb18: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x32bb18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x32bb1c: 0xc420c770  lwc1        $f0, -0x3890($at)
    ctx->pc = 0x32bb1cu;
    { uint32_t bits = FAST_READ32(0x62C770u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32bb20: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x32bb20u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x32bb24: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x32bb24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x32bb28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32bb28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bb2c: 0x0  nop
    ctx->pc = 0x32bb2cu;
    // NOP
    // 0x32bb30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32bb30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32bb34: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x32bb34u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x32bb38: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32BB38u;
    SET_GPR_U32(ctx, 31, 0x32BB40u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32BB38u, 0x32BB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BB40u;
label_32bb40:
    // 0x32bb40: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x32bb40u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32bb44: 0x8eb30004  lw          $s3, 0x4($s5)
    ctx->pc = 0x32bb44u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x32bb48: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x32bb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32bb4c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x32bb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32bb50: 0x62f023  subu        $fp, $v1, $v0
    ctx->pc = 0x32bb50u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32bb54: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x32bb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x32bb58: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x32bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32bb5c: 0x62b823  subu        $s7, $v1, $v0
    ctx->pc = 0x32bb5cu;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32bb60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32bb64: 0x1e1043  sra         $v0, $fp, 1
    ctx->pc = 0x32bb64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 30), 1));
    // 0x32bb68: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x32bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x32bb6c: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x32bb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x32bb70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32bb74: 0x171043  sra         $v0, $s7, 1
    ctx->pc = 0x32bb74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 23), 1));
    // 0x32bb78: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x32bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x32bb7c: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x32bb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x32bb80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32bb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32bb84: 0x1e1843  sra         $v1, $fp, 1
    ctx->pc = 0x32bb84u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 30), 1));
    // 0x32bb88: 0x283a023  subu        $s4, $s4, $v1
    ctx->pc = 0x32bb88u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x32bb8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32bb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32bb90: 0x171843  sra         $v1, $s7, 1
    ctx->pc = 0x32bb90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 23), 1));
    // 0x32bb94: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x32bb94u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32bb98: 0x2669823  subu        $s3, $s3, $a2
    ctx->pc = 0x32bb98u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x32bb9c: 0x0  nop
    ctx->pc = 0x32bb9cu;
    // NOP
label_32bba0:
    // 0x32bba0: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x32bba0u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bba4: 0x0  nop
    ctx->pc = 0x32bba4u;
    // NOP
    // 0x32bba8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32bba8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32bbac: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x32bbacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x32bbb0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x32bbb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x32bbb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32bbb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bbb8: 0x0  nop
    ctx->pc = 0x32bbb8u;
    // NOP
    // 0x32bbbc: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32bbbcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32bbc0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32BBC0u;
    SET_GPR_U32(ctx, 31, 0x32BBC8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32BBC0u, 0x32BBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BBC8u;
label_32bbc8:
    // 0x32bbc8: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x32bbc8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32bbcc: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x32bbccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x32bbd0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x32bbd0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bbd4: 0x0  nop
    ctx->pc = 0x32bbd4u;
    // NOP
    // 0x32bbd8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32bbd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32bbdc: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x32bbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x32bbe0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x32bbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x32bbe4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32bbe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bbe8: 0x0  nop
    ctx->pc = 0x32bbe8u;
    // NOP
    // 0x32bbec: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32bbecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32bbf0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32BBF0u;
    SET_GPR_U32(ctx, 31, 0x32BBF8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32BBF0u, 0x32BBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BBF8u;
label_32bbf8:
    // 0x32bbf8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x32bbf8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32bbfc: 0xafa600b4  sw          $a2, 0xB4($sp)
    ctx->pc = 0x32bbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 6));
    // 0x32bc00: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x32bc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32bc04: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x32bc04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x32bc08: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x32bc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32bc0c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x32bc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x32bc10: 0x2ac00  sll         $s5, $v0, 16
    ctx->pc = 0x32bc10u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32bc14: 0xd51825  or          $v1, $a2, $s5
    ctx->pc = 0x32bc14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 21));
    // 0x32bc18: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x32bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x32bc1c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32bc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32bc20: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x32bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32bc24: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x32bc24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32bc28: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x32bc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x32bc2c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32bc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32bc30: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32bc34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32bc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32bc38: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x32bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x32bc3c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32bc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32bc40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32bc40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32bc44: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x32bc44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x32bc48: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x32bc4c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x32bc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32bc50: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x32BC50u;
    {
        const bool branch_taken_0x32bc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32bc50) {
            ctx->pc = 0x32BDB8u;
            goto label_32bdb8;
        }
    }
    ctx->pc = 0x32BC58u;
    // 0x32bc58: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x32bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x32bc5c: 0x24426150  addiu       $v0, $v0, 0x6150
    ctx->pc = 0x32bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x32bc60: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x32bc60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x32bc64: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x32bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x32bc68: 0x90425e04  lbu         $v0, 0x5E04($v0)
    ctx->pc = 0x32bc68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24068)));
    // 0x32bc6c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x32bc6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32bc70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32bc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32bc74: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x32BC74u;
    {
        const bool branch_taken_0x32bc74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32bc74) {
            ctx->pc = 0x32BCA4u;
            goto label_32bca4;
        }
    }
    ctx->pc = 0x32BC7Cu;
    // 0x32bc7c: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x32bc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x32bc80: 0xc46c5e00  lwc1        $f12, 0x5E00($v1)
    ctx->pc = 0x32bc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32bc84: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x32BC84u;
    SET_GPR_U32(ctx, 31, 0x32BC8Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x32BC84u, 0x32BC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BC8Cu;
label_32bc8c:
    // 0x32bc8c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32bc8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32bc90: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x32BC90u;
    SET_GPR_U32(ctx, 31, 0x32BC98u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x32BC90u, 0x32BC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BC98u;
label_32bc98:
    // 0x32bc98: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x32bc98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x32bc9c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x32BC9Cu;
    {
        const bool branch_taken_0x32bc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32bc9c) {
            ctx->pc = 0x32BCE8u;
            goto label_32bce8;
        }
    }
    ctx->pc = 0x32BCA4u;
label_32bca4:
    // 0x32bca4: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x32bca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x32bca8: 0x90425e04  lbu         $v0, 0x5E04($v0)
    ctx->pc = 0x32bca8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24068)));
    // 0x32bcac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32bcacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32bcb0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x32bcb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32bcb4: 0x1446000c  bne         $v0, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x32BCB4u;
    {
        const bool branch_taken_0x32bcb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x32bcb4) {
            ctx->pc = 0x32BCE8u;
            goto label_32bce8;
        }
    }
    ctx->pc = 0x32BCBCu;
    // 0x32bcbc: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x32bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x32bcc0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x32bcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x32bcc4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32bcc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32bcc8: 0xc4405e00  lwc1        $f0, 0x5E00($v0)
    ctx->pc = 0x32bcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32bccc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x32bcccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32bcd0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x32bcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x32bcd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32bcd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bcd8: 0x0  nop
    ctx->pc = 0x32bcd8u;
    // NOP
    // 0x32bcdc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x32bcdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x32bce0: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x32bce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x32bce4: 0x0  nop
    ctx->pc = 0x32bce4u;
    // NOP
label_32bce8:
    // 0x32bce8: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x32bce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x32bcec: 0xc4415e00  lwc1        $f1, 0x5E00($v0)
    ctx->pc = 0x32bcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32bcf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32bcf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bcf4: 0x0  nop
    ctx->pc = 0x32bcf4u;
    // NOP
    // 0x32bcf8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32bcf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32bcfc: 0x0  nop
    ctx->pc = 0x32bcfcu;
    // NOP
    // 0x32bd00: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x32BD00u;
    {
        const bool branch_taken_0x32bd00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32bd00) {
            ctx->pc = 0x32BD1Cu;
            goto label_32bd1c;
        }
    }
    ctx->pc = 0x32BD08u;
    // 0x32bd08: 0x8fa600cc  lw          $a2, 0xCC($sp)
    ctx->pc = 0x32bd08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x32bd0c: 0xc4c05e00  lwc1        $f0, 0x5E00($a2)
    ctx->pc = 0x32bd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32bd10: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x32bd10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x32bd14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32BD14u;
    {
        const bool branch_taken_0x32bd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32bd14) {
            ctx->pc = 0x32BD28u;
            goto label_32bd28;
        }
    }
    ctx->pc = 0x32BD1Cu;
label_32bd1c:
    // 0x32bd1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32bd1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bd20: 0x0  nop
    ctx->pc = 0x32bd20u;
    // NOP
    // 0x32bd24: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x32bd24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_32bd28:
    // 0x32bd28: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x32bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32bd2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32bd2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bd30: 0x0  nop
    ctx->pc = 0x32bd30u;
    // NOP
    // 0x32bd34: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32bd34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32bd38: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x32bd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32bd3c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32bd3cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32bd40: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32BD40u;
    SET_GPR_U32(ctx, 31, 0x32BD48u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32BD40u, 0x32BD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BD48u;
label_32bd48:
    // 0x32bd48: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x32bd48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x32bd4c: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x32bd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x32bd50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32bd50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bd54: 0x0  nop
    ctx->pc = 0x32bd54u;
    // NOP
    // 0x32bd58: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32bd58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32bd5c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x32bd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32bd60: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32bd60u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32bd64: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32BD64u;
    SET_GPR_U32(ctx, 31, 0x32BD6Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32BD64u, 0x32BD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BD6Cu;
label_32bd6c:
    // 0x32bd6c: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x32bd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x32bd70: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x32bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x32bd74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32bd74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bd78: 0x0  nop
    ctx->pc = 0x32bd78u;
    // NOP
    // 0x32bd7c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32bd7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32bd80: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x32bd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32bd84: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32bd84u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32bd88: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32BD88u;
    SET_GPR_U32(ctx, 31, 0x32BD90u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32BD88u, 0x32BD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BD90u;
label_32bd90:
    // 0x32bd90: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x32bd90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x32bd94: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x32bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x32bd98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32bd98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bd9c: 0x0  nop
    ctx->pc = 0x32bd9cu;
    // NOP
    // 0x32bda0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32bda0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32bda4: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x32bda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32bda8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32bda8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32bdac: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32BDACu;
    SET_GPR_U32(ctx, 31, 0x32BDB4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32BDACu, 0x32BDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BDB4u;
label_32bdb4:
    // 0x32bdb4: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x32bdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_32bdb8:
    // 0x32bdb8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x32bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x32bdbc: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x32bdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32bdc0: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x32bdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x32bdc4: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x32bdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x32bdc8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x32bdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32bdcc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x32bdccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32bdd0: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x32bdd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x32bdd4: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x32bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x32bdd8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x32bdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x32bddc: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x32bddcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32bde0: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x32bde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x32bde4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x32bde4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x32bde8: 0x2663ffdf  addiu       $v1, $s3, -0x21
    ctx->pc = 0x32bde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967263));
    // 0x32bdec: 0x8ec228c4  lw          $v0, 0x28C4($s6)
    ctx->pc = 0x32bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10436)));
    // 0x32bdf0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x32bdf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x32bdf4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x32bdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x32bdf8: 0x3c0238e3  lui         $v0, 0x38E3
    ctx->pc = 0x32bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14563 << 16));
    // 0x32bdfc: 0x34428e39  ori         $v0, $v0, 0x8E39
    ctx->pc = 0x32bdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
    // 0x32be00: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x32be00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32be04: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x32be04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x32be08: 0x0  nop
    ctx->pc = 0x32be08u;
    // NOP
    // 0x32be0c: 0x1010  mfhi        $v0
    ctx->pc = 0x32be0cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x32be10: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x32be10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x32be14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32be14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32be18: 0x24420021  addiu       $v0, $v0, 0x21
    ctx->pc = 0x32be18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 33));
    // 0x32be1c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x32be1cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32be20: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x32be20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x32be24: 0x2443ffdf  addiu       $v1, $v0, -0x21
    ctx->pc = 0x32be24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967263));
    // 0x32be28: 0x8ec228c4  lw          $v0, 0x28C4($s6)
    ctx->pc = 0x32be28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10436)));
    // 0x32be2c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x32be2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x32be30: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x32be30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x32be34: 0x3c0238e3  lui         $v0, 0x38E3
    ctx->pc = 0x32be34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14563 << 16));
    // 0x32be38: 0x34428e39  ori         $v0, $v0, 0x8E39
    ctx->pc = 0x32be38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
    // 0x32be3c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x32be3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32be40: 0x3afc2  srl         $s5, $v1, 31
    ctx->pc = 0x32be40u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x32be44: 0x0  nop
    ctx->pc = 0x32be44u;
    // NOP
    // 0x32be48: 0x1010  mfhi        $v0
    ctx->pc = 0x32be48u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x32be4c: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x32be4cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
    // 0x32be50: 0x951021  addu        $v0, $a0, $s5
    ctx->pc = 0x32be50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x32be54: 0x24420021  addiu       $v0, $v0, 0x21
    ctx->pc = 0x32be54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 33));
    // 0x32be58: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x32be58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x32be5c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32be5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32be60: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x32be60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x32be64: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32be64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x32be68: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x32be68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32be6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32BE6Cu;
    {
        const bool branch_taken_0x32be6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32be6c) {
            ctx->pc = 0x32BE88u;
            goto label_32be88;
        }
    }
    ctx->pc = 0x32BE74u;
    // 0x32be74: 0x26730176  addiu       $s3, $s3, 0x176
    ctx->pc = 0x32be74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 374));
    // 0x32be78: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x32be78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x32be7c: 0x24420176  addiu       $v0, $v0, 0x176
    ctx->pc = 0x32be7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 374));
    // 0x32be80: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x32be80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x32be84: 0x0  nop
    ctx->pc = 0x32be84u;
    // NOP
label_32be88:
    // 0x32be88: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x32be88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x32be8c: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x32be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x32be90: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x32be90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32be94: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x32be94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x32be98: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x32be98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x32be9c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32be9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32bea0: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x32bea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x32bea4: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x32bea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x32bea8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x32bea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x32beac: 0x3402fff9  ori         $v0, $zero, 0xFFF9
    ctx->pc = 0x32beacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x32beb0: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x32beb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x32beb4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x32beb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x32beb8: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x32beb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x32bebc: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x32bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x32bec0: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x32bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x32bec4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x32bec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32bec8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x32bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x32becc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32beccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32bed0: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x32bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32bed4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32bed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32bed8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32bed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32bedc: 0x26220024  addiu       $v0, $s1, 0x24
    ctx->pc = 0x32bedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x32bee0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32bee0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32bee4: 0x341efff9  ori         $fp, $zero, 0xFFF9
    ctx->pc = 0x32bee4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x32bee8: 0x26220028  addiu       $v0, $s1, 0x28
    ctx->pc = 0x32bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x32beec: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x32beecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
    // 0x32bef0: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x32bef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32bef4: 0x96170002  lhu         $s7, 0x2($s0)
    ctx->pc = 0x32bef4u;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x32bef8: 0x32e3ffff  andi        $v1, $s7, 0xFFFF
    ctx->pc = 0x32bef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x32befc: 0xdcc20018  ld          $v0, 0x18($a2)
    ctx->pc = 0x32befcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x32bf00: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x32bf00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x32bf04: 0x214be  dsrl32      $v0, $v0, 18
    ctx->pc = 0x32bf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x32bf08: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x32bf08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x32bf0c: 0xdcc30018  ld          $v1, 0x18($a2)
    ctx->pc = 0x32bf0cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x32bf10: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x32bf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x32bf14: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x32bf14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x32bf18: 0x3c07fff8  lui         $a3, 0xFFF8
    ctx->pc = 0x32bf18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65528 << 16));
    // 0x32bf1c: 0x34e7001f  ori         $a3, $a3, 0x1F
    ctx->pc = 0x32bf1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)31);
    // 0x32bf20: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x32bf20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x32bf24: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x32bf24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x32bf28: 0x4ac38  dsll        $s5, $a0, 16
    ctx->pc = 0x32bf28u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) << 16);
    // 0x32bf2c: 0x36a4ffff  ori         $a0, $s5, 0xFFFF
    ctx->pc = 0x32bf2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x32bf30: 0x872825  or          $a1, $a0, $a3
    ctx->pc = 0x32bf30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x32bf34: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x32bf34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x32bf38: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x32bf38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32bf3c: 0xfcc20018  sd          $v0, 0x18($a2)
    ctx->pc = 0x32bf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
    // 0x32bf40: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x32bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x32bf44: 0x24441a14  addiu       $a0, $v0, 0x1A14
    ctx->pc = 0x32bf44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6676));
    // 0x32bf48: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x32bf48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x32bf4c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32BF4Cu;
    SET_GPR_U32(ctx, 31, 0x32BF54u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32BF4Cu, 0x32BF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BF54u;
label_32bf54:
    // 0x32bf54: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32bf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32bf58: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x32bf58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x32bf5c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x32bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x32bf60: 0x34621009  ori         $v0, $v1, 0x1009
    ctx->pc = 0x32bf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
    // 0x32bf64: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x32bf64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x32bf68: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x32bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32bf6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32bf6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32bf70: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x32bf70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x32bf74: 0x22138  dsll        $a0, $v0, 4
    ctx->pc = 0x32bf74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 4);
    // 0x32bf78: 0x3483000a  ori         $v1, $a0, 0xA
    ctx->pc = 0x32bf78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x32bf7c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x32bf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32bf80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32bf80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32bf84: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x32bf84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x32bf88: 0x223b8  dsll        $a0, $v0, 14
    ctx->pc = 0x32bf88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 14);
    // 0x32bf8c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x32bf8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x32bf90: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x32bf90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32bf94: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x32bf94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x32bf98: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x32bf98u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x32bf9c: 0x61638  dsll        $v0, $a2, 24
    ctx->pc = 0x32bf9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 24);
    // 0x32bfa0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x32bfa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32bfa4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x32bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x32bfa8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32bfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32bfac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x32bfacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x32bfb0: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x32bfb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x32bfb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32bfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32bfb8: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x32bfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x32bfbc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x32bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x32bfc0: 0x24431a14  addiu       $v1, $v0, 0x1A14
    ctx->pc = 0x32bfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 6676));
    // 0x32bfc4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x32bfc4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32bfc8: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x32bfc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x32bfcc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32BFCCu;
    SET_GPR_U32(ctx, 31, 0x32BFD4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32BFCCu, 0x32BFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BFD4u;
label_32bfd4:
    // 0x32bfd4: 0x265e0010  addiu       $fp, $s2, 0x10
    ctx->pc = 0x32bfd4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32bfd8: 0x73c09628  paddub      $s2, $fp, $zero
    ctx->pc = 0x32bfd8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x32bfdc: 0x2623002c  addiu       $v1, $s1, 0x2C
    ctx->pc = 0x32bfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x32bfe0: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x32bfe0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32bfe4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x32bfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x32bfe8: 0x24570028  addiu       $s7, $v0, 0x28
    ctx->pc = 0x32bfe8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x32bfec: 0xafb700b0  sw          $s7, 0xB0($sp)
    ctx->pc = 0x32bfecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 23));
    // 0x32bff0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32bff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32bff4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x32bff4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x32bff8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x32bff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x32bffc: 0x34631043  ori         $v1, $v1, 0x1043
    ctx->pc = 0x32bffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4163);
    // 0x32c000: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x32c000u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x32c004: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x32c004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x32c008: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32c008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32c00c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x32C00Cu;
    {
        const bool branch_taken_0x32c00c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32c00c) {
            ctx->pc = 0x32C04Cu;
            goto label_32c04c;
        }
    }
    ctx->pc = 0x32C014u;
    // 0x32c014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32c014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c018: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x32C018u;
    {
        const bool branch_taken_0x32c018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32c018) {
            ctx->pc = 0x32C04Cu;
            goto label_32c04c;
        }
    }
    ctx->pc = 0x32C020u;
    // 0x32c020: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32C020u;
    {
        const bool branch_taken_0x32c020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c020) {
            ctx->pc = 0x32C030u;
            goto label_32c030;
        }
    }
    ctx->pc = 0x32C028u;
    // 0x32c028: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x32C028u;
    {
        const bool branch_taken_0x32c028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c028) {
            ctx->pc = 0x32C058u;
            goto label_32c058;
        }
    }
    ctx->pc = 0x32C030u;
label_32c030:
    // 0x32c030: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x32c030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x32c034: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32c034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32c038: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x32c038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x32c03c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32c03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32c040: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x32c040u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x32c044: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32C044u;
    {
        const bool branch_taken_0x32c044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c044) {
            ctx->pc = 0x32C058u;
            goto label_32c058;
        }
    }
    ctx->pc = 0x32C04Cu;
label_32c04c:
    // 0x32c04c: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x32c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x32c050: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x32c050u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x32c054: 0x0  nop
    ctx->pc = 0x32c054u;
    // NOP
label_32c058:
    // 0x32c058: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x32c058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x32c05c: 0x24421a14  addiu       $v0, $v0, 0x1A14
    ctx->pc = 0x32c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6676));
    // 0x32c060: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32c060u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32c064: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x32c064u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x32c068: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32C068u;
    SET_GPR_U32(ctx, 31, 0x32C070u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32C068u, 0x32C070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C070u;
label_32c070:
    // 0x32c070: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x32c070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32c074: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x32c074u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32c078: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x32c078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x32c07c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32c080: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x32c080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x32c084: 0x0  nop
    ctx->pc = 0x32c084u;
    // NOP
label_32c088:
    // 0x32c088: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x32c088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x32c08c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x32c08cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x32c090: 0x1440fd9f  bnez        $v0, . + 4 + (-0x261 << 2)
    ctx->pc = 0x32C090u;
    {
        const bool branch_taken_0x32c090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c090) {
            ctx->pc = 0x32B710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32b710;
        }
    }
    ctx->pc = 0x32C098u;
    // 0x32c098: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x32c098u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x32c09c: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x32c09cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
    // 0x32c0a0: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x32c0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x32c0a4: 0x3462103f  ori         $v0, $v1, 0x103F
    ctx->pc = 0x32c0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4159);
    // 0x32c0a8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x32c0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x32c0ac: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x32c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x32c0b0: 0x24421a14  addiu       $v0, $v0, 0x1A14
    ctx->pc = 0x32c0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6676));
    // 0x32c0b4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32c0b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32c0b8: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x32c0b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x32c0bc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32C0BCu;
    SET_GPR_U32(ctx, 31, 0x32C0C4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32C0BCu, 0x32C0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C0C4u;
label_32c0c4:
    // 0x32c0c4: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x32c0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32c0c8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x32c0c8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32c0cc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32c0d0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x32c0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x32c0d4: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x32c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x32c0d8: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x32c0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x32c0dc: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x32c0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x32c0e0: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x32c0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x32c0e4: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x32c0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x32c0e8: 0x3c15005d  lui         $s5, 0x5D
    ctx->pc = 0x32c0e8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)93 << 16));
    // 0x32c0ec: 0x26a41a14  addiu       $a0, $s5, 0x1A14
    ctx->pc = 0x32c0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 6676));
    // 0x32c0f0: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x32c0f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x32c0f4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32C0F4u;
    SET_GPR_U32(ctx, 31, 0x32C0FCu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32C0F4u, 0x32C0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C0FCu;
label_32c0fc:
    // 0x32c0fc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x32c0fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32c100: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x32c100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32c104: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x32c104u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x32c108: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32c108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32c10c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x32c10cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x32c110: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x32c110u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x32c114: 0x34c51048  ori         $a1, $a2, 0x1048
    ctx->pc = 0x32c114u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4168);
    // 0x32c118: 0xae450004  sw          $a1, 0x4($s2)
    ctx->pc = 0x32c118u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
    // 0x32c11c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x32c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x32c120: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x32c120u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x32c124: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x32c124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x32c128: 0x24421a14  addiu       $v0, $v0, 0x1A14
    ctx->pc = 0x32c128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6676));
    // 0x32c12c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32c12cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32c130: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x32c130u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x32c134: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32C134u;
    SET_GPR_U32(ctx, 31, 0x32C13Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32C134u, 0x32C13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C13Cu;
label_32c13c:
    // 0x32c13c: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x32c13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32c140: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x32c140u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_32c144:
    // 0x32c144: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x32c144u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x32c148: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x32c148u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32c14c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x32c14cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32c150: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x32c150u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32c154: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x32c154u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32c158: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32c158u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32c15c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32c15cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32c160: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32c160u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32c164: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32c164u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32c168: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32c168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c16c: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x32c16cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x32c170: 0x3e00008  jr          $ra
    ctx->pc = 0x32C170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C178u;
}
