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

// Function: entry_0029a918
// Address: 0x29a918 - 0x29ab64
void entry_0029a918_0x29a918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029a918_0x29a918");
#endif

    switch (ctx->pc) {
        case 0x29aa6cu: goto label_29aa6c;
        case 0x29aa84u: goto label_29aa84;
        case 0x29aaa4u: goto label_29aaa4;
        default: break;
    }

    ctx->pc = 0x29a918u;

    // 0x29a918: 0x3c010085  lui         $at, 0x85
    ctx->pc = 0x29a918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)133 << 16));
    // 0x29a91c: 0x8c243580  lw          $a0, 0x3580($at)
    ctx->pc = 0x29a91cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x853580u));
    // 0x29a920: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x29a920u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x29a924: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x29a924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a928: 0xac6401d0  sw          $a0, 0x1D0($v1)
    ctx->pc = 0x29a928u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 4));
    // 0x29a92c: 0x72009e28  paddub      $s3, $s0, $zero
    ctx->pc = 0x29a92cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29a930: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29a930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29a934: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29a934u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a938: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x29a938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x29a93c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29a93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29a940: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29a940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a944: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x29a944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x29a948: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x29a948u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x29a94c: 0x3c050eee  lui         $a1, 0xEEE
    ctx->pc = 0x29a94cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3822 << 16));
    // 0x29a950: 0x34a2eeee  ori         $v0, $a1, 0xEEEE
    ctx->pc = 0x29a950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61166);
    // 0x29a954: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x29a954u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x29a958: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29a958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29a95c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29a95cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a960: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29a960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a964: 0xdc420160  ld          $v0, 0x160($v0)
    ctx->pc = 0x29a964u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x29a968: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x29a968u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x29a96c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x29a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x29a970: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x29a970u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x29a974: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29a974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29a978: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29a978u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a97c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a980: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x29a980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29a984: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x29a984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x29a988: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x29a988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x29a98c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29a98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29a990: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x29a990u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x29a994: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x29a994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x29a998: 0xfe050008  sd          $a1, 0x8($s0)
    ctx->pc = 0x29a998u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 5));
    // 0x29a99c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29a9a0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29a9a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a9a4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x29a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29a9a8: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x29a9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x29a9ac: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x29a9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x29a9b0: 0xfe050008  sd          $a1, 0x8($s0)
    ctx->pc = 0x29a9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 5));
    // 0x29a9b4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29a9b8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29a9b8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a9bc: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a9c0: 0xdc420168  ld          $v0, 0x168($v0)
    ctx->pc = 0x29a9c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 360)));
    // 0x29a9c4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x29a9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x29a9c8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x29a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x29a9cc: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x29a9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x29a9d0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29a9d4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29a9d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a9d8: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x29a9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a9dc: 0xdc620170  ld          $v0, 0x170($v1)
    ctx->pc = 0x29a9dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 368)));
    // 0x29a9e0: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x29a9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x29a9e4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x29a9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29a9e8: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x29a9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x29a9ec: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x29a9ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29a9f0: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29a9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a9f4: 0xdc450180  ld          $a1, 0x180($v0)
    ctx->pc = 0x29a9f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x29a9f8: 0xfe050000  sd          $a1, 0x0($s0)
    ctx->pc = 0x29a9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 5));
    // 0x29a9fc: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x29a9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x29aa00: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x29aa00u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x29aa04: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x29aa04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29aa08: 0x8fa50218  lw          $a1, 0x218($sp)
    ctx->pc = 0x29aa08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29aa0c: 0xdca20178  ld          $v0, 0x178($a1)
    ctx->pc = 0x29aa0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 376)));
    // 0x29aa10: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x29aa10u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x29aa14: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x29aa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x29aa18: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x29aa18u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x29aa1c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29aa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29aa20: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29aa20u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29aa24: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29aa28: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x29aa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29aa2c: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x29aa2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x29aa30: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29aa34: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x29aa34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29aa38: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x29aa38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x29aa3c: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29aa40: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x29aa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29aa44: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x29aa44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x29aa48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29aa48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29aa4c: 0x0  nop
    ctx->pc = 0x29aa4cu;
    // NOP
    // 0x29aa50: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x29aa50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x29aa54: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x29aa54u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29aa58: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x29aa58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29aa5c: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x29aa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x29aa60: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x29aa60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x29aa64: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x29AA64u;
    SET_GPR_U32(ctx, 31, 0x29AA6Cu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x29AA6Cu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29AA6Cu) { return; }
    ctx->pc = 0x29AA6Cu;
label_29aa6c:
    // 0x29aa6c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x29aa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29aa70: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x29aa70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x29aa74: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x29aa74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x29aa78: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x29aa78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29aa7c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x29AA7Cu;
    SET_GPR_U32(ctx, 31, 0x29AA84u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x29AA84u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29AA84u) { return; }
    ctx->pc = 0x29AA84u;
label_29aa84:
    // 0x29aa84: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x29aa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29aa88: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x29aa88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    // 0x29aa8c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x29aa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29aa90: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x29aa90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x29aa94: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x29aa94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29aa98: 0xc7ac020c  lwc1        $f12, 0x20C($sp)
    ctx->pc = 0x29aa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29aa9c: 0xc040c60  jal         func_103180
    ctx->pc = 0x29AA9Cu;
    SET_GPR_U32(ctx, 31, 0x29AAA4u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x29AAA4u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29AAA4u) { return; }
    ctx->pc = 0x29AAA4u;
label_29aaa4:
    // 0x29aaa4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x29aaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x29aaa8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29aaa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29aaac: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29aaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29aab0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29aab0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aab4: 0x0  nop
    ctx->pc = 0x29aab4u;
    // NOP
    // 0x29aab8: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x29AAB8u;
    {
        const bool branch_taken_0x29aab8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aab8) {
            ctx->pc = 0x29AB64u;
            return;
        }
    }
    ctx->pc = 0x29AAC0u;
    // 0x29aac0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29aac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29aac4: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x29aac4u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29aac8: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29aac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29aacc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29aaccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aad0: 0x0  nop
    ctx->pc = 0x29aad0u;
    // NOP
    // 0x29aad4: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x29AAD4u;
    {
        const bool branch_taken_0x29aad4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aad4) {
            ctx->pc = 0x29AB64u;
            return;
        }
    }
    ctx->pc = 0x29AADCu;
    // 0x29aadc: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x29aadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29aae0: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x29aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x29aae4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x29aae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x29aae8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29aae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29aaec: 0x0  nop
    ctx->pc = 0x29aaecu;
    // NOP
    // 0x29aaf0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29aaf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aaf4: 0x0  nop
    ctx->pc = 0x29aaf4u;
    // NOP
    // 0x29aaf8: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x29AAF8u;
    {
        const bool branch_taken_0x29aaf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aaf8) {
            ctx->pc = 0x29AB64u;
            return;
        }
    }
    ctx->pc = 0x29AB00u;
    // 0x29ab00: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x29ab00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ab04: 0x3c034516  lui         $v1, 0x4516
    ctx->pc = 0x29ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17686 << 16));
    // 0x29ab08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29ab08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ab0c: 0x0  nop
    ctx->pc = 0x29ab0cu;
    // NOP
    // 0x29ab10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29ab10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ab14: 0x0  nop
    ctx->pc = 0x29ab14u;
    // NOP
    // 0x29ab18: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x29AB18u;
    {
        const bool branch_taken_0x29ab18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ab18) {
            ctx->pc = 0x29AB64u;
            return;
        }
    }
    ctx->pc = 0x29AB20u;
    // 0x29ab20: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x29ab20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ab24: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x29ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x29ab28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29ab28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ab2c: 0x0  nop
    ctx->pc = 0x29ab2cu;
    // NOP
    // 0x29ab30: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29ab30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ab34: 0x0  nop
    ctx->pc = 0x29ab34u;
    // NOP
    // 0x29ab38: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x29AB38u;
    {
        const bool branch_taken_0x29ab38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ab38) {
            ctx->pc = 0x29AB64u;
            return;
        }
    }
    ctx->pc = 0x29AB40u;
    // 0x29ab40: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x29ab40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ab44: 0x3c02450f  lui         $v0, 0x450F
    ctx->pc = 0x29ab44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17679 << 16));
    // 0x29ab48: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x29ab48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x29ab4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29ab4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ab50: 0x0  nop
    ctx->pc = 0x29ab50u;
    // NOP
    // 0x29ab54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29ab54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ab58: 0x0  nop
    ctx->pc = 0x29ab58u;
    // NOP
    // 0x29ab5c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x29AB5Cu;
    {
        const bool branch_taken_0x29ab5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ab5c) {
            ctx->pc = 0x29AB70u;
            return;
        }
    }
    ctx->pc = 0x29AB64u;
}
