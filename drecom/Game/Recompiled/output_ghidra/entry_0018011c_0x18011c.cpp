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

// Function: entry_0018011c
// Address: 0x18011c - 0x1804dc
void entry_0018011c_0x18011c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018011c_0x18011c");
#endif

    switch (ctx->pc) {
        case 0x180268u: goto label_180268;
        case 0x180294u: goto label_180294;
        case 0x1802bcu: goto label_1802bc;
        case 0x1802dcu: goto label_1802dc;
        case 0x180304u: goto label_180304;
        case 0x180334u: goto label_180334;
        case 0x180354u: goto label_180354;
        case 0x180388u: goto label_180388;
        case 0x1804acu: goto label_1804ac;
        default: break;
    }

    ctx->pc = 0x18011cu;

    // 0x18011c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18011cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180120: 0x8c24f1c0  lw          $a0, -0xE40($at)
    ctx->pc = 0x180120u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x47F1C0u));
    // 0x180124: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x180124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x180128: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18012c: 0x8425f138  lh          $a1, -0xEC8($at)
    ctx->pc = 0x18012cu;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x47F138u));
    // 0x180130: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x180130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
    // 0x180134: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x180134u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x180138: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x180138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18013c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18013cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x180140: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x180140u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180144: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x180144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x180148: 0x24831380  addiu       $v1, $a0, 0x1380
    ctx->pc = 0x180148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4992));
    // 0x18014c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x18014cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x180150: 0x90a30154  lbu         $v1, 0x154($a1)
    ctx->pc = 0x180150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 340)));
    // 0x180154: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x180154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x180158: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x180158u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x18015c: 0x102000ee  beqz        $at, . + 4 + (0xEE << 2)
    ctx->pc = 0x18015Cu;
    {
        const bool branch_taken_0x18015c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18015c) {
            ctx->pc = 0x180518u;
            return;
        }
    }
    ctx->pc = 0x180164u;
    // 0x180164: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180168: 0x8424f138  lh          $a0, -0xEC8($at)
    ctx->pc = 0x180168u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x47F138u));
    // 0x18016c: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x18016cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x180170: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x180170u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x180174: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x180174u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x180178: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x180178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x18017c: 0x23140  sll         $a2, $v0, 5
    ctx->pc = 0x18017cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x180180: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x180180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x180184: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x180184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x180188: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x180188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x18018c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18018cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180190: 0x8c24f1c0  lw          $a0, -0xE40($at)
    ctx->pc = 0x180190u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x47F1C0u));
    // 0x180194: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x180194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x180198: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x180198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x18019c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x18019cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1801a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1801a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1801a4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1801a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1801a8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1801a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1801ac: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1801acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1801b0: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x1801b0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x1801b4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1801b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1801b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1801b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1801bc: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x1801bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1801c0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1801c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1801c4: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x1801c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1801c8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1801c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1801cc: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x1801ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x1801d0: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x1801d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1801d4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1801d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1801d8: 0x8c22f1c0  lw          $v0, -0xE40($at)
    ctx->pc = 0x1801d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47F1C0u));
    // 0x1801dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1801dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1801e0: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x1801e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x1801e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1801e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1801e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1801e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1801ec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1801ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1801f0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1801f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1801f4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1801f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1801f8: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x1801f8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x1801fc: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1801fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x180200: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x180200u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x180204: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x180204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x180208: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x180208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18020c: 0x53940  sll         $a3, $a1, 5
    ctx->pc = 0x18020cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x180210: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x180210u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x180214: 0x24c30380  addiu       $v1, $a2, 0x380
    ctx->pc = 0x180214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 896));
    // 0x180218: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x180218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x18021c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18021cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180220: 0x8c23f1c0  lw          $v1, -0xE40($at)
    ctx->pc = 0x180220u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F1C0u));
    // 0x180224: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x180224u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x180228: 0x24830006  addiu       $v1, $a0, 0x6
    ctx->pc = 0x180228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x18022c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x18022cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x180230: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x180230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x180234: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x180234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180238: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x180238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18023c: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x18023cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x180240: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x180240u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180244: 0x0  nop
    ctx->pc = 0x180244u;
    // NOP
    // 0x180248: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x180248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x18024c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x18024cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x180250: 0x2464f190  addiu       $a0, $v1, -0xE70
    ctx->pc = 0x180250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963600));
    // 0x180254: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x180254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x180258: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x180258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x18025c: 0x2466f140  addiu       $a2, $v1, -0xEC0
    ctx->pc = 0x18025cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963520));
    // 0x180260: 0xc040c80  jal         func_103200
    ctx->pc = 0x180260u;
    SET_GPR_U32(ctx, 31, 0x180268u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x180268u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x180268u) { return; }
    ctx->pc = 0x180268u;
label_180268:
    // 0x180268: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x180268u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18026c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18026cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x180270: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x180270u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180274: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180278: 0xe420f19c  swc1        $f0, -0xE64($at)
    ctx->pc = 0x180278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F19Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F19Cu, _value); } while (0); }
    // 0x18027c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x18027cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x180280: 0x2464f190  addiu       $a0, $v1, -0xE70
    ctx->pc = 0x180280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963600));
    // 0x180284: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x180284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x180288: 0x2465f190  addiu       $a1, $v1, -0xE70
    ctx->pc = 0x180288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963600));
    // 0x18028c: 0xc040c24  jal         func_103090
    ctx->pc = 0x18028Cu;
    SET_GPR_U32(ctx, 31, 0x180294u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x180294u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x180294u) { return; }
    ctx->pc = 0x180294u;
label_180294:
    // 0x180294: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x180294u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x180298: 0x3c03433b  lui         $v1, 0x433B
    ctx->pc = 0x180298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17211 << 16));
    // 0x18029c: 0x34668000  ori         $a2, $v1, 0x8000
    ctx->pc = 0x18029cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1802a0: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x1802a0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1802a4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1802a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1802a8: 0x2464f190  addiu       $a0, $v1, -0xE70
    ctx->pc = 0x1802a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963600));
    // 0x1802ac: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1802acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1802b0: 0x2465f190  addiu       $a1, $v1, -0xE70
    ctx->pc = 0x1802b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963600));
    // 0x1802b4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1802B4u;
    SET_GPR_U32(ctx, 31, 0x1802BCu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1802BCu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1802BCu) { return; }
    ctx->pc = 0x1802BCu;
label_1802bc:
    // 0x1802bc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1802bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1802c0: 0x2464f150  addiu       $a0, $v1, -0xEB0
    ctx->pc = 0x1802c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963536));
    // 0x1802c4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1802c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1802c8: 0x2445f180  addiu       $a1, $v0, -0xE80
    ctx->pc = 0x1802c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963584));
    // 0x1802cc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1802ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1802d0: 0x2466f190  addiu       $a2, $v1, -0xE70
    ctx->pc = 0x1802d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963600));
    // 0x1802d4: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x1802D4u;
    SET_GPR_U32(ctx, 31, 0x1802DCu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x1802DCu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1802DCu) { return; }
    ctx->pc = 0x1802DCu;
label_1802dc:
    // 0x1802dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1802dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1802e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1802e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1802e4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1802e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1802e8: 0xe420f15c  swc1        $f0, -0xEA4($at)
    ctx->pc = 0x1802e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F15Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F15Cu, _value); } while (0); }
    // 0x1802ec: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x1802ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x1802f0: 0x24c4f150  addiu       $a0, $a2, -0xEB0
    ctx->pc = 0x1802f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963536));
    // 0x1802f4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1802f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1802f8: 0x2465f150  addiu       $a1, $v1, -0xEB0
    ctx->pc = 0x1802f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963536));
    // 0x1802fc: 0xc040c24  jal         func_103090
    ctx->pc = 0x1802FCu;
    SET_GPR_U32(ctx, 31, 0x180304u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x180304u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x180304u) { return; }
    ctx->pc = 0x180304u;
label_180304:
    // 0x180304: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x180304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x180308: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x180308u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18030c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18030cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180310: 0xe420f15c  swc1        $f0, -0xEA4($at)
    ctx->pc = 0x180310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F15Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F15Cu, _value); } while (0); }
    // 0x180314: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x180314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x180318: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x180318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18031c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x18031cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x180320: 0x2444f150  addiu       $a0, $v0, -0xEB0
    ctx->pc = 0x180320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963536));
    // 0x180324: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x180324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x180328: 0x2445f150  addiu       $a1, $v0, -0xEB0
    ctx->pc = 0x180328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963536));
    // 0x18032c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x18032Cu;
    SET_GPR_U32(ctx, 31, 0x180334u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x180334u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x180334u) { return; }
    ctx->pc = 0x180334u;
label_180334:
    // 0x180334: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x180334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x180338: 0x2464f150  addiu       $a0, $v1, -0xEB0
    ctx->pc = 0x180338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963536));
    // 0x18033c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x18033cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x180340: 0x2445f150  addiu       $a1, $v0, -0xEB0
    ctx->pc = 0x180340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963536));
    // 0x180344: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x180344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x180348: 0x2466f140  addiu       $a2, $v1, -0xEC0
    ctx->pc = 0x180348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963520));
    // 0x18034c: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x18034Cu;
    SET_GPR_U32(ctx, 31, 0x180354u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x180354u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x180354u) { return; }
    ctx->pc = 0x180354u;
label_180354:
    // 0x180354: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x180354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x180358: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x180358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18035c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18035cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180360: 0xe420f15c  swc1        $f0, -0xEA4($at)
    ctx->pc = 0x180360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F15Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F15Cu, _value); } while (0); }
    // 0x180364: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x180364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x180368: 0x2464f180  addiu       $a0, $v1, -0xE80
    ctx->pc = 0x180368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963584));
    // 0x18036c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x18036cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x180370: 0x2443f150  addiu       $v1, $v0, -0xEB0
    ctx->pc = 0x180370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963536));
    // 0x180374: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x180374u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x180378: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x180378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x18037c: 0x2446f140  addiu       $a2, $v0, -0xEC0
    ctx->pc = 0x18037cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963520));
    // 0x180380: 0xc040c80  jal         func_103200
    ctx->pc = 0x180380u;
    SET_GPR_U32(ctx, 31, 0x180388u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x180388u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x180388u) { return; }
    ctx->pc = 0x180388u;
label_180388:
    // 0x180388: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x180388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x18038c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x18038cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180390: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180394: 0xe420f18c  swc1        $f0, -0xE74($at)
    ctx->pc = 0x180394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F18Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F18Cu, _value); } while (0); }
    // 0x180398: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x180398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x18039c: 0x24a3f150  addiu       $v1, $a1, -0xEB0
    ctx->pc = 0x18039cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963536));
    // 0x1803a0: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1803a0u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x47F150u));
    // 0x1803a4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1803a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1803a8: 0x2483f140  addiu       $v1, $a0, -0xEC0
    ctx->pc = 0x1803a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963520));
    // 0x1803ac: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1803acu;
    do { __m128i _value = (GPR_VEC(ctx, 5)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47F140u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47F140u, _value); } while (0);
    // 0x1803b0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1803b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1803b4: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x1803b4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x1803b8: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x1803b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1803bc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1803bcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1803c0: 0x61940  sll         $v1, $a2, 5
    ctx->pc = 0x1803c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1803c4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1803c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1803c8: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x1803c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1803cc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1803ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1803d0: 0x24650380  addiu       $a1, $v1, 0x380
    ctx->pc = 0x1803d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x1803d4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1803d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1803d8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1803d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1803dc: 0x8c23f1c0  lw          $v1, -0xE40($at)
    ctx->pc = 0x1803dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F1C0u));
    // 0x1803e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1803e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1803e4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1803e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1803e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1803e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1803ec: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1803ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1803f0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1803f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1803f4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1803f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1803f8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1803f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1803fc: 0x8425f138  lh          $a1, -0xEC8($at)
    ctx->pc = 0x1803fcu;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x47F138u));
    // 0x180400: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x180400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x180404: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x180404u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x180408: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x180408u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18040c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x18040cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x180410: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x180410u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180414: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x180414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x180418: 0x24630380  addiu       $v1, $v1, 0x380
    ctx->pc = 0x180418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x18041c: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x18041cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x180420: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180424: 0x8c23f1c0  lw          $v1, -0xE40($at)
    ctx->pc = 0x180424u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F1C0u));
    // 0x180428: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x180428u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18042c: 0x24a30005  addiu       $v1, $a1, 0x5
    ctx->pc = 0x18042cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    // 0x180430: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x180430u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x180434: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x180434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x180438: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x180438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18043c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x18043cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x180440: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180444: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x180444u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x180448: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x180448u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x18044c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x18044cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x180450: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x180450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x180454: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x180454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x180458: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x180458u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18045c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x18045cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x180460: 0x24650380  addiu       $a1, $v1, 0x380
    ctx->pc = 0x180460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x180464: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x180464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x180468: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18046c: 0x8c23f1c0  lw          $v1, -0xE40($at)
    ctx->pc = 0x18046cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F1C0u));
    // 0x180470: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x180470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x180474: 0x24650006  addiu       $a1, $v1, 0x6
    ctx->pc = 0x180474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x180478: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x180478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18047c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x18047cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x180480: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x180480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180484: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x180484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x180488: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x180488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18048c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18048cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180490: 0x0  nop
    ctx->pc = 0x180490u;
    // NOP
    // 0x180494: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x180494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x180498: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x180498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x18049c: 0x2484f140  addiu       $a0, $a0, -0xEC0
    ctx->pc = 0x18049cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963520));
    // 0x1804a0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1804a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1804a4: 0xc05f7ac  jal         func_17DEB0
    ctx->pc = 0x1804A4u;
    SET_GPR_U32(ctx, 31, 0x1804ACu);
    ctx->pc = 0x17DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DEB0u, 0x1804A4u, 0x1804ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1804ACu;
label_1804ac:
    // 0x1804ac: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1804acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x1804b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1804b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1804b4: 0x0  nop
    ctx->pc = 0x1804b4u;
    // NOP
    // 0x1804b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1804b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1804bc: 0x0  nop
    ctx->pc = 0x1804bcu;
    // NOP
    // 0x1804c0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1804C0u;
    {
        const bool branch_taken_0x1804c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1804c0) {
            ctx->pc = 0x1804DCu;
            return;
        }
    }
    ctx->pc = 0x1804C8u;
    // 0x1804c8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1804c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1804cc: 0x8c24f1c0  lw          $a0, -0xE40($at)
    ctx->pc = 0x1804ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x47F1C0u));
    // 0x1804d0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1804d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1804d4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1804d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1804d8: 0xac23f1c0  sw          $v1, -0xE40($at)
    ctx->pc = 0x1804d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47F1C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1C0u, _value); } while (0);
    ctx->pc = 0x1804dcu;
}
