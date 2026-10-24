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

// Function: entry_001575e4
// Address: 0x1575e4 - 0x1576c8
void entry_001575e4_0x1575e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001575e4_0x1575e4");
#endif

    ctx->pc = 0x1575e4u;

    // 0x1575e4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x1575e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x1575e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1575e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1575ec: 0xc7a001ec  lwc1        $f0, 0x1EC($sp)
    ctx->pc = 0x1575ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1575f0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1575f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1575f4: 0xe7a201f4  swc1        $f2, 0x1F4($sp)
    ctx->pc = 0x1575f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
    // 0x1575f8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1575f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1575fc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1575fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157600: 0x2442f7d0  addiu       $v0, $v0, -0x830
    ctx->pc = 0x157600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965200));
    // 0x157604: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x157604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157608: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x157608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15760c: 0xc7a001f4  lwc1        $f0, 0x1F4($sp)
    ctx->pc = 0x15760cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157610: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157614: 0xe7a001f4  swc1        $f0, 0x1F4($sp)
    ctx->pc = 0x157614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
    // 0x157618: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x157618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x15761c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15761cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157620: 0xc7a001f4  lwc1        $f0, 0x1F4($sp)
    ctx->pc = 0x157620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157624: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x157624u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x157628: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x157628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x15762c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x15762cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x157630: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x157630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x157634: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x157634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157638: 0xe48000e0  swc1        $f0, 0xE0($a0)
    ctx->pc = 0x157638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
    // 0x15763c: 0x3c054380  lui         $a1, 0x4380
    ctx->pc = 0x15763cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17280 << 16));
    // 0x157640: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x157640u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157644: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x157644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157648: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x157648u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x15764c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x15764cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x157650: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x157650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x157654: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x157654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x157658: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x157658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15765c: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x15765cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x157660: 0x3c0344e0  lui         $v1, 0x44E0
    ctx->pc = 0x157660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17632 << 16));
    // 0x157664: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x157664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157668: 0xc7a101f4  lwc1        $f1, 0x1F4($sp)
    ctx->pc = 0x157668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15766c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15766cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157670: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x157670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x157674: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x157674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x157678: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x157678u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x15767c: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x15767cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x157680: 0xe4400160  swc1        $f0, 0x160($v0)
    ctx->pc = 0x157680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 352), bits); }
    // 0x157684: 0x3c0344f2  lui         $v1, 0x44F2
    ctx->pc = 0x157684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17650 << 16));
    // 0x157688: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x157688u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15768c: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x15768cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157690: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x157690u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x157694: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x157694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x157698: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x157698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x15769c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x15769cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1576a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1576a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1576a4: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x1576a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x1576a8: 0xc7a101ec  lwc1        $f1, 0x1EC($sp)
    ctx->pc = 0x1576a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1576ac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1576acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1576b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1576b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1576b4: 0x0  nop
    ctx->pc = 0x1576b4u;
    // NOP
    // 0x1576b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1576b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1576bc: 0xe7a001ec  swc1        $f0, 0x1EC($sp)
    ctx->pc = 0x1576bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
    // 0x1576c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1576c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1576c4: 0x0  nop
    ctx->pc = 0x1576c4u;
    // NOP
    ctx->pc = 0x1576c8u;
}
