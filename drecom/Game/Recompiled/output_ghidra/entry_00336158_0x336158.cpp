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

// Function: entry_00336158
// Address: 0x336158 - 0x3365a0
void entry_00336158_0x336158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00336158_0x336158");
#endif

    switch (ctx->pc) {
        case 0x336278u: goto label_336278;
        case 0x3362b4u: goto label_3362b4;
        case 0x3362f4u: goto label_3362f4;
        case 0x3364e4u: goto label_3364e4;
        case 0x3364f4u: goto label_3364f4;
        case 0x33657cu: goto label_33657c;
        case 0x33659cu: goto label_33659c;
        default: break;
    }

    ctx->pc = 0x336158u;

    // 0x336158: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x336158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33615c: 0x2442e7d0  addiu       $v0, $v0, -0x1830
    ctx->pc = 0x33615cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961104));
    // 0x336160: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x336160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x336164: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x336164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x336168: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x336168u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x33616c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x33616cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x336170: 0x3442103b  ori         $v0, $v0, 0x103B
    ctx->pc = 0x336170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4155);
    // 0x336174: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x336174u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
    // 0x336178: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x336178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x33617c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33617cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x336180: 0xfec20008  sd          $v0, 0x8($s6)
    ctx->pc = 0x336180u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 2));
    // 0x336184: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x336184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336188: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x336188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x33618c: 0x24470018  addiu       $a3, $v0, 0x18
    ctx->pc = 0x33618cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x336190: 0x90e60004  lbu         $a2, 0x4($a3)
    ctx->pc = 0x336190u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x336194: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x336194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x336198: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x336198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33619c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x33619cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x3361a0: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x3361a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x3361a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3361a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3361a8: 0xa0e20004  sb          $v0, 0x4($a3)
    ctx->pc = 0x3361a8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3361ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3361acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3361b0: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3361b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x3361b4: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3361b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x3361b8: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x3361b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x3361bc: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x3361bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x3361c0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x3361c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x3361c4: 0xfea20008  sd          $v0, 0x8($s5)
    ctx->pc = 0x3361c4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 2));
    // 0x3361c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3361c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3361cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3361ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3361d0: 0x3c028800  lui         $v0, 0x8800
    ctx->pc = 0x3361d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34816 << 16));
    // 0x3361d4: 0x34423b14  ori         $v0, $v0, 0x3B14
    ctx->pc = 0x3361d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15124);
    // 0x3361d8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3361d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3361dc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3361dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3361e0: 0x94224a04  lhu         $v0, 0x4A04($at)
    ctx->pc = 0x3361e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894A04u));
    // 0x3361e4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3361e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3361e8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3361e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3361ec: 0x94224a00  lhu         $v0, 0x4A00($at)
    ctx->pc = 0x3361ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894A00u));
    // 0x3361f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3361f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3361f4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3361f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3361f8: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x3361f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x3361fc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3361fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336200: 0x94224a06  lhu         $v0, 0x4A06($at)
    ctx->pc = 0x336200u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894A06u));
    // 0x336204: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x336204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336208: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33620c: 0x94224a02  lhu         $v0, 0x4A02($at)
    ctx->pc = 0x33620cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894A02u));
    // 0x336210: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x336210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336214: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x336214u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x336218: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x336218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x33621c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x33621cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x336220: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x336220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x336224: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x336224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x336228: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x336228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x33622c: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x33622cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x336230: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336234: 0x0  nop
    ctx->pc = 0x336234u;
    // NOP
    // 0x336238: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x336238u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33623c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x33623cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x336240: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x336240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x336244: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x336244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x336248: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x336248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x33624c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33624cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336250: 0x0  nop
    ctx->pc = 0x336250u;
    // NOP
    // 0x336254: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x336254u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x336258: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x336258u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33625c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x33625cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x336260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336264: 0x0  nop
    ctx->pc = 0x336264u;
    // NOP
    // 0x336268: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x336268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x33626c: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x33626cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x336270: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x336270u;
    SET_GPR_U32(ctx, 31, 0x336278u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x336270u, 0x336278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336278u;
label_336278:
    // 0x336278: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x336278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x33627c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x33627cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x336280: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336284: 0x0  nop
    ctx->pc = 0x336284u;
    // NOP
    // 0x336288: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x336288u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33628c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x33628cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x336290: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x336290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x336294: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x336294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x336298: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33629c: 0x0  nop
    ctx->pc = 0x33629cu;
    // NOP
    // 0x3362a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3362a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3362a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3362a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3362a8: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x3362a8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3362ac: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x3362ACu;
    SET_GPR_U32(ctx, 31, 0x3362B4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3362ACu, 0x3362B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3362B4u;
label_3362b4:
    // 0x3362b4: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x3362b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x3362b8: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x3362b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x3362bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3362bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3362c0: 0x0  nop
    ctx->pc = 0x3362c0u;
    // NOP
    // 0x3362c4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3362c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3362c8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x3362c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x3362cc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3362ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3362d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3362d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3362d4: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x3362d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x3362d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3362d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3362dc: 0x0  nop
    ctx->pc = 0x3362dcu;
    // NOP
    // 0x3362e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3362e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3362e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3362e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3362e8: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x3362e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3362ec: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x3362ECu;
    SET_GPR_U32(ctx, 31, 0x3362F4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3362ECu, 0x3362F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3362F4u;
label_3362f4:
    // 0x3362f4: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x3362f4u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3362f8: 0xafbe0104  sw          $fp, 0x104($sp)
    ctx->pc = 0x3362f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 30));
    // 0x3362fc: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x3362fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x336300: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x336300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x336304: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x336304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x336308: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x336308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x33630c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x33630cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x336310: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x336310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x336314: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x336314u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x336318: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x336318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x33631c: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x33631cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x336320: 0x24c57000  addiu       $a1, $a2, 0x7000
    ctx->pc = 0x336320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 28672));
    // 0x336324: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x336324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x336328: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x336328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x33632c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x33632cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x336330: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x336330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x336334: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x336334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x336338: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x336338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x33633c: 0x26220018  addiu       $v0, $s1, 0x18
    ctx->pc = 0x33633cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x336340: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x336340u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x336344: 0x3402fffb  ori         $v0, $zero, 0xFFFB
    ctx->pc = 0x336344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x336348: 0x2623001c  addiu       $v1, $s1, 0x1C
    ctx->pc = 0x336348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x33634c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33634cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x336350: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x336350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x336354: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x336354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x336358: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x336358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x33635c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x33635cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336360: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x336360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x336364: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x336364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x336368: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x336368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x33636c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x33636cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x336370: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x336370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x336374: 0x26220024  addiu       $v0, $s1, 0x24
    ctx->pc = 0x336374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x336378: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x336378u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x33637c: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x33637cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x336380: 0x26220028  addiu       $v0, $s1, 0x28
    ctx->pc = 0x336380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x336384: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x336384u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x336388: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x336388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x33638c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x33638cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x336390: 0x24827000  addiu       $v0, $a0, 0x7000
    ctx->pc = 0x336390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x336394: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x336394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336398: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x336398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x33639c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x33639cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3363a0: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x3363a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x3363a4: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x3363a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3363a8: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x3363a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3363ac: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x3363acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x3363b0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3363b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x3363b4: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x3363b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x3363b8: 0x26220034  addiu       $v0, $s1, 0x34
    ctx->pc = 0x3363b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x3363bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3363bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3363c0: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x3363c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x3363c4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x3363c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3363c8: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x3363c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x3363cc: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x3363ccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3363d0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x3363d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x3363d4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3363d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3363d8: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x3363d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x3363dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3363dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3363e0: 0x2821825  or          $v1, $s4, $v0
    ctx->pc = 0x3363e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x3363e4: 0x2622003c  addiu       $v0, $s1, 0x3C
    ctx->pc = 0x3363e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x3363e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3363e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3363ec: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x3363ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x3363f0: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x3363f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3363f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3363f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3363f8: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3363f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3363fc: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x3363fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x336400: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x336400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x336404: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x336404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x336408: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33640c: 0x94224a00  lhu         $v0, 0x4A00($at)
    ctx->pc = 0x33640cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894A00u));
    // 0x336410: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x336410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336414: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x336414u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x336418: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33641c: 0x94224a02  lhu         $v0, 0x4A02($at)
    ctx->pc = 0x33641cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894A02u));
    // 0x336420: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x336420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336424: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x336424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x336428: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x336428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x33642c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x33642cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x336430: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x336430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x336434: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x336434u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x336438: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33643c: 0x94244a04  lhu         $a0, 0x4A04($at)
    ctx->pc = 0x33643cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x894A04u));
    // 0x336440: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x336440u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x336444: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x336444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x336448: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33644c: 0x94224a02  lhu         $v0, 0x4A02($at)
    ctx->pc = 0x33644cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894A02u));
    // 0x336450: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x336450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336454: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x336454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x336458: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x336458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x33645c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33645cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x336460: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x336460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x336464: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x336464u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x336468: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33646c: 0x94234a00  lhu         $v1, 0x4A00($at)
    ctx->pc = 0x33646cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x894A00u));
    // 0x336470: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x336470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x336474: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x336474u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x336478: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33647c: 0x94224a06  lhu         $v0, 0x4A06($at)
    ctx->pc = 0x33647cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894A06u));
    // 0x336480: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x336480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336484: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x336484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x336488: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x336488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x33648c: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x33648cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x336490: 0x2622002c  addiu       $v0, $s1, 0x2C
    ctx->pc = 0x336490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x336494: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x336494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x336498: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33649c: 0x94224a04  lhu         $v0, 0x4A04($at)
    ctx->pc = 0x33649cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894A04u));
    // 0x3364a0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3364a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3364a4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3364a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3364a8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3364a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3364ac: 0x94224a06  lhu         $v0, 0x4A06($at)
    ctx->pc = 0x3364acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894A06u));
    // 0x3364b0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3364b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3364b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3364b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3364b8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3364b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3364bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3364bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3364c0: 0x26220038  addiu       $v0, $s1, 0x38
    ctx->pc = 0x3364c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x3364c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3364c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3364c8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x3364c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x3364cc: 0x244249d8  addiu       $v0, $v0, 0x49D8
    ctx->pc = 0x3364ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18904));
    // 0x3364d0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3364d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3364d4: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3364d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3364d8: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x3364d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x3364dc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3364DCu;
    SET_GPR_U32(ctx, 31, 0x3364E4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3364DCu, 0x3364E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3364E4u;
label_3364e4:
    // 0x3364e4: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3364e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3364e8: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x3364e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x3364ec: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3364ECu;
    SET_GPR_U32(ctx, 31, 0x3364F4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3364ECu, 0x3364F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3364F4u;
label_3364f4:
    // 0x3364f4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3364f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3364f8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x3364f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x3364fc: 0x24454a08  addiu       $a1, $v0, 0x4A08
    ctx->pc = 0x3364fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 18952));
    // 0x336500: 0x70a0be28  paddub      $s7, $a1, $zero
    ctx->pc = 0x336500u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x336504: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x336504u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x336508: 0xaee60000  sw          $a2, 0x0($s7)
    ctx->pc = 0x336508u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 6));
    // 0x33650c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x33650cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x336510: 0x34421009  ori         $v0, $v0, 0x1009
    ctx->pc = 0x336510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x336514: 0xaee20004  sw          $v0, 0x4($s7)
    ctx->pc = 0x336514u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
    // 0x336518: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33651c: 0x94224a00  lhu         $v0, 0x4A00($at)
    ctx->pc = 0x33651cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894A00u));
    // 0x336520: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x336520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336524: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x336524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x336528: 0x3443000a  ori         $v1, $v0, 0xA
    ctx->pc = 0x336528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x33652c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33652cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336530: 0x94224a04  lhu         $v0, 0x4A04($at)
    ctx->pc = 0x336530u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894A04u));
    // 0x336534: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x336534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336538: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x336538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x33653c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33653cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x336540: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336544: 0x94224a02  lhu         $v0, 0x4A02($at)
    ctx->pc = 0x336544u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894A02u));
    // 0x336548: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x336548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33654c: 0x22638  dsll        $a0, $v0, 24
    ctx->pc = 0x33654cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 24);
    // 0x336550: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x336550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x336554: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336558: 0x94254a06  lhu         $a1, 0x4A06($at)
    ctx->pc = 0x336558u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x894A06u));
    // 0x33655c: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x33655cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x336560: 0x610bc  dsll32      $v0, $a2, 2
    ctx->pc = 0x336560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 2));
    // 0x336564: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x336564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x336568: 0xfee20008  sd          $v0, 0x8($s7)
    ctx->pc = 0x336568u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 2));
    // 0x33656c: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x33656cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x336570: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x336570u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x336574: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x336574u;
    SET_GPR_U32(ctx, 31, 0x33657Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x336574u, 0x33657Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33657Cu;
label_33657c:
    // 0x33657c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x33657cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x336580: 0x8c226570  lw          $v0, 0x6570($at)
    ctx->pc = 0x336580u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x396570u));
    // 0x336584: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x336584u;
    {
        const bool branch_taken_0x336584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336584) {
            ctx->pc = 0x3365A0u;
            return;
        }
    }
    ctx->pc = 0x33658Cu;
    // 0x33658c: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x33658cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x336590: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x336590u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x336594: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x336594u;
    SET_GPR_U32(ctx, 31, 0x33659Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x336594u, 0x33659Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33659Cu;
label_33659c:
    // 0x33659c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x33659cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x3365a0u;
}
