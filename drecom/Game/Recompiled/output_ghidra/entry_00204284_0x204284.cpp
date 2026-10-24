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

// Function: entry_00204284
// Address: 0x204284 - 0x20448c
void entry_00204284_0x204284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204284_0x204284");
#endif

    switch (ctx->pc) {
        case 0x2043f8u: goto label_2043f8;
        case 0x20440cu: goto label_20440c;
        case 0x204424u: goto label_204424;
        case 0x204438u: goto label_204438;
        case 0x204450u: goto label_204450;
        case 0x204460u: goto label_204460;
        case 0x204470u: goto label_204470;
        case 0x204484u: goto label_204484;
        default: break;
    }

    ctx->pc = 0x204284u;

    // 0x204284: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204284u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204288: 0x24e21350  addiu       $v0, $a3, 0x1350
    ctx->pc = 0x204288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4944));
    // 0x20428c: 0x3c043ca3  lui         $a0, 0x3CA3
    ctx->pc = 0x20428cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15523 << 16));
    // 0x204290: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x204290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x204294: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x204294u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x204298: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x204298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20429c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20429cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2042a0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2042a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2042a4: 0x8ca70058  lw          $a3, 0x58($a1)
    ctx->pc = 0x2042a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x2042a8: 0x8ce60830  lw          $a2, 0x830($a3)
    ctx->pc = 0x2042a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2096)));
    // 0x2042ac: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x2042acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x2042b0: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x2042b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2042b4: 0x24e21350  addiu       $v0, $a3, 0x1350
    ctx->pc = 0x2042b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4944));
    // 0x2042b8: 0x3c043ca3  lui         $a0, 0x3CA3
    ctx->pc = 0x2042b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15523 << 16));
    // 0x2042bc: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x2042bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x2042c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2042c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2042c4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2042c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2042c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2042c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2042cc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2042ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2042d0: 0x8ca50058  lw          $a1, 0x58($a1)
    ctx->pc = 0x2042d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x2042d4: 0x8ca608c0  lw          $a2, 0x8C0($a1)
    ctx->pc = 0x2042d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2240)));
    // 0x2042d8: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x2042d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x2042dc: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x2042dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2042e0: 0x24e21350  addiu       $v0, $a3, 0x1350
    ctx->pc = 0x2042e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4944));
    // 0x2042e4: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x2042e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x2042e8: 0x3465d70a  ori         $a1, $v1, 0xD70A
    ctx->pc = 0x2042e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2042ec: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2042ecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2042f0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2042f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2042f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2042f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2042f8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2042f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2042fc: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x2042fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x204300: 0x8ca60950  lw          $a2, 0x950($a1)
    ctx->pc = 0x204300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2384)));
    // 0x204304: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x204304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x204308: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204308u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20430c: 0x24e41350  addiu       $a0, $a3, 0x1350
    ctx->pc = 0x20430cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4944));
    // 0x204310: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x204310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x204314: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x204314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x204318: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x204318u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20431c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x20431cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204320: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x204320u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x204324: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204328: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x204328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x20432c: 0x8ca60a70  lw          $a2, 0xA70($a1)
    ctx->pc = 0x20432cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2672)));
    // 0x204330: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x204330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x204334: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204334u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204338: 0x24e21350  addiu       $v0, $a3, 0x1350
    ctx->pc = 0x204338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4944));
    // 0x20433c: 0x3c073ca3  lui         $a3, 0x3CA3
    ctx->pc = 0x20433cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15523 << 16));
    // 0x204340: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x204340u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x204344: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x204344u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x204348: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x204348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20434c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20434cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x204350: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204354: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x204354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x204358: 0x8ca60b00  lw          $a2, 0xB00($a1)
    ctx->pc = 0x204358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2816)));
    // 0x20435c: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x20435cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x204360: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204360u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204364: 0x24e21350  addiu       $v0, $a3, 0x1350
    ctx->pc = 0x204364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4944));
    // 0x204368: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x204368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x20436c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x20436cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x204370: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x204370u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x204374: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x204374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204378: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x204378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20437c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20437cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204380: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x204380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x204384: 0x8ca70b90  lw          $a3, 0xB90($a1)
    ctx->pc = 0x204384u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2960)));
    // 0x204388: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x204388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x20438c: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x20438cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204390: 0x24e21350  addiu       $v0, $a3, 0x1350
    ctx->pc = 0x204390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4944));
    // 0x204394: 0x3c043ca3  lui         $a0, 0x3CA3
    ctx->pc = 0x204394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15523 << 16));
    // 0x204398: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x204398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x20439c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20439cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2043a0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2043a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2043a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2043a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2043a8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2043a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2043ac: 0x8ca60058  lw          $a2, 0x58($a1)
    ctx->pc = 0x2043acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x2043b0: 0x8cc70c20  lw          $a3, 0xC20($a2)
    ctx->pc = 0x2043b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3104)));
    // 0x2043b4: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x2043b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x2043b8: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x2043b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2043bc: 0x24e21350  addiu       $v0, $a3, 0x1350
    ctx->pc = 0x2043bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4944));
    // 0x2043c0: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x2043c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x2043c4: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x2043c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x2043c8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2043c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2043cc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2043ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2043d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2043d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2043d4: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x2043d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2043d8: 0x8ce50058  lw          $a1, 0x58($a3)
    ctx->pc = 0x2043d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
    // 0x2043dc: 0x8ca60f80  lw          $a2, 0xF80($a1)
    ctx->pc = 0x2043dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3968)));
    // 0x2043e0: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x2043e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x2043e4: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x2043e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2043e8: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2043e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2043ec: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2043ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2043f0: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x2043F0u;
    SET_GPR_U32(ctx, 31, 0x2043F8u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x2043F0u, 0x2043F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2043F8u;
label_2043f8:
    // 0x2043f8: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x2043f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2043fc: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2043fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x204400: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x204400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x204404: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x204404u;
    SET_GPR_U32(ctx, 31, 0x20440Cu);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x204404u, 0x20440Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20440Cu;
label_20440c:
    // 0x20440c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x20440cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204410: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x204410u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x204414: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x204414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x204418: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x204418u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x20441c: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x20441Cu;
    SET_GPR_U32(ctx, 31, 0x204424u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x20441Cu, 0x204424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204424u;
label_204424:
    // 0x204424: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x204424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204428: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x204428u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x20442c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x20442cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x204430: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x204430u;
    SET_GPR_U32(ctx, 31, 0x204438u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x204430u, 0x204438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204438u;
label_204438:
    // 0x204438: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x204438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20443c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x20443cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x204440: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x204440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x204444: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x204444u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x204448: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x204448u;
    SET_GPR_U32(ctx, 31, 0x204450u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x204448u, 0x204450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204450u;
label_204450:
    // 0x204450: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204454: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x204454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x204458: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x204458u;
    SET_GPR_U32(ctx, 31, 0x204460u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x204458u, 0x204460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204460u;
label_204460:
    // 0x204460: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204464: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x204464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x204468: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x204468u;
    SET_GPR_U32(ctx, 31, 0x204470u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x204468u, 0x204470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204470u;
label_204470:
    // 0x204470: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204470u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204474: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x204474u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204478: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x204478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x20447c: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x20447Cu;
    SET_GPR_U32(ctx, 31, 0x204484u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x20447Cu, 0x204484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204484u;
label_204484:
    // 0x204484: 0x10000333  b           . + 4 + (0x333 << 2)
    ctx->pc = 0x204484u;
    {
        const bool branch_taken_0x204484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204484) {
            ctx->pc = 0x205154u;
            return;
        }
    }
    ctx->pc = 0x20448Cu;
}
