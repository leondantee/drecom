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

// Function: entry_00176054
// Address: 0x176054 - 0x1762ac
void entry_00176054_0x176054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176054_0x176054");
#endif

    switch (ctx->pc) {
        case 0x176234u: goto label_176234;
        case 0x176254u: goto label_176254;
        case 0x17629cu: goto label_17629c;
        default: break;
    }

    ctx->pc = 0x176054u;

    // 0x176054: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x176054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x176058: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x176058u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17605c: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x17605cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x176060: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x176060u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x176064: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x176064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x176068: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x176068u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17606c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x17606cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x176070: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176074: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x176074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176078: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x176078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17607c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x17607cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x176080: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176084: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x176084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x176088: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x176088u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17608c: 0x26a200b0  addiu       $v0, $s5, 0xB0
    ctx->pc = 0x17608cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 176));
    // 0x176090: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x176090u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x176094: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x176094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x176098: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x176098u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17609c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x17609cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1760a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1760a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1760a4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1760a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1760a8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1760a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1760ac: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1760acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1760b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1760b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1760b4: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x1760b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1760b8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1760b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1760bc: 0x26a200c0  addiu       $v0, $s5, 0xC0
    ctx->pc = 0x1760bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1760c0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1760c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1760c4: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x1760c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1760c8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1760c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1760cc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1760ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1760d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1760d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1760d4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1760d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1760d8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1760d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1760dc: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1760dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1760e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1760e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1760e4: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x1760e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1760e8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1760e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1760ec: 0x26a200d0  addiu       $v0, $s5, 0xD0
    ctx->pc = 0x1760ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
    // 0x1760f0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1760f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1760f4: 0x131c3c  dsll32      $v1, $s3, 16
    ctx->pc = 0x1760f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 16));
    // 0x1760f8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1760f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1760fc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1760fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x176100: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176104: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x176104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176108: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x176108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17610c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x17610cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x176110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176114: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x176114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x176118: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x176118u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17611c: 0x26a200e0  addiu       $v0, $s5, 0xE0
    ctx->pc = 0x17611cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 224));
    // 0x176120: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x176120u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x176124: 0x26a200f0  addiu       $v0, $s5, 0xF0
    ctx->pc = 0x176124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
    // 0x176128: 0x26c300e0  addiu       $v1, $s6, 0xE0
    ctx->pc = 0x176128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 224));
    // 0x17612c: 0x102c3c  dsll32      $a1, $s0, 16
    ctx->pc = 0x17612cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 16));
    // 0x176130: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x176130u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x176134: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x176134u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x176138: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x176138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17613c: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x17613cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x176140: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x176140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x176144: 0x2484bd00  addiu       $a0, $a0, -0x4300
    ctx->pc = 0x176144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x176148: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x176148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17614c: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x17614cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x176150: 0x11343c  dsll32      $a2, $s1, 16
    ctx->pc = 0x176150u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 16));
    // 0x176154: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x176154u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x176158: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x176158u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x17615c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x17615cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x176160: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x176160u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x176164: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x176164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x176168: 0x24a5bd00  addiu       $a1, $a1, -0x4300
    ctx->pc = 0x176168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x17616c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x17616cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x176170: 0x24a70060  addiu       $a3, $a1, 0x60
    ctx->pc = 0x176170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x176174: 0x12343c  dsll32      $a2, $s2, 16
    ctx->pc = 0x176174u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 16));
    // 0x176178: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x176178u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x17617c: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x17617cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x176180: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x176180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x176184: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x176184u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x176188: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x176188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x17618c: 0x24a5bd00  addiu       $a1, $a1, -0x4300
    ctx->pc = 0x17618cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x176190: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x176190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x176194: 0x24a80060  addiu       $t0, $a1, 0x60
    ctx->pc = 0x176194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x176198: 0x13343c  dsll32      $a2, $s3, 16
    ctx->pc = 0x176198u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) << (32 + 16));
    // 0x17619c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x17619cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1761a0: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1761a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1761a4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1761a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1761a8: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x1761a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1761ac: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1761acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x1761b0: 0x24a5bd00  addiu       $a1, $a1, -0x4300
    ctx->pc = 0x1761b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x1761b4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1761b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1761b8: 0x24a50060  addiu       $a1, $a1, 0x60
    ctx->pc = 0x1761b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x1761bc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1761bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1761c0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1761c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1761c4: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x1761c4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1761c8: 0xd9040000  lqc2        $vf4, 0x0($t0)
    ctx->pc = 0x1761c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1761cc: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x1761ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1761d0: 0x4bc111ac  vsub.xyz    $vf6, $vf2, $vf1
    ctx->pc = 0x1761d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1761d4: 0x4bc119ec  vsub.xyz    $vf7, $vf3, $vf1
    ctx->pc = 0x1761d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1761d8: 0x4bc1222c  vsub.xyz    $vf8, $vf4, $vf1
    ctx->pc = 0x1761d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1761dc: 0x4bc12a6c  vsub.xyz    $vf9, $vf5, $vf1
    ctx->pc = 0x1761dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1761e0: 0x4bc2333c  vmove.xyz   $vf2, $vf6
    ctx->pc = 0x1761e0u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[6], _mm_castsi128_ps(mask)); }
    // 0x1761e4: 0x4bc33b3c  vmove.xyz   $vf3, $vf7
    ctx->pc = 0x1761e4u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], ctx->vu0_vf[7], _mm_castsi128_ps(mask)); }
    // 0x1761e8: 0x4bc4433c  vmove.xyz   $vf4, $vf8
    ctx->pc = 0x1761e8u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[8], _mm_castsi128_ps(mask)); }
    // 0x1761ec: 0x4bc54b3c  vmove.xyz   $vf5, $vf9
    ctx->pc = 0x1761ecu;
    { __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[9], _mm_castsi128_ps(mask)); }
    // 0x1761f0: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1761f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1761f4: 0xf8430010  sqc2        $vf3, 0x10($v0)
    ctx->pc = 0x1761f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1761f8: 0xf8440020  sqc2        $vf4, 0x20($v0)
    ctx->pc = 0x1761f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1761fc: 0xf8450030  sqc2        $vf5, 0x30($v0)
    ctx->pc = 0x1761fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x176200: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x176200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x176204: 0x30420e00  andi        $v0, $v0, 0xE00
    ctx->pc = 0x176204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3584);
    // 0x176208: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x176208u;
    {
        const bool branch_taken_0x176208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x176208) {
            ctx->pc = 0x1762ACu;
            return;
        }
    }
    ctx->pc = 0x176210u;
    // 0x176210: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x176210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x176214: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x176214u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x176218: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x176218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17621c: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x17621cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x176220: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x176220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x176224: 0x246501a0  addiu       $a1, $v1, 0x1A0
    ctx->pc = 0x176224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 416));
    // 0x176228: 0x24460190  addiu       $a2, $v0, 0x190
    ctx->pc = 0x176228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x17622c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x17622Cu;
    SET_GPR_U32(ctx, 31, 0x176234u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x17622Cu, 0x176234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176234u;
label_176234:
    // 0x176234: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x176234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x176238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x176238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17623c: 0x0  nop
    ctx->pc = 0x17623cu;
    // NOP
    // 0x176240: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x176240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x176244: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x176244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x176248: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x176248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17624c: 0xc040c24  jal         func_103090
    ctx->pc = 0x17624Cu;
    SET_GPR_U32(ctx, 31, 0x176254u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x176254u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x176254u) { return; }
    ctx->pc = 0x176254u;
label_176254:
    // 0x176254: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x176254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176258: 0xe6c00070  swc1        $f0, 0x70($s6)
    ctx->pc = 0x176258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 112), bits); }
    // 0x17625c: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x17625cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176260: 0xe6c00074  swc1        $f0, 0x74($s6)
    ctx->pc = 0x176260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 116), bits); }
    // 0x176264: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x176264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176268: 0xe6c00078  swc1        $f0, 0x78($s6)
    ctx->pc = 0x176268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 120), bits); }
    // 0x17626c: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17626cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x176270: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x176270u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x176274: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x176274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x176278: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17627c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17627cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176280: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x176280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x176284: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x176284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x176288: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17628c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x17628cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x176290: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x176290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x176294: 0xc040c24  jal         func_103090
    ctx->pc = 0x176294u;
    SET_GPR_U32(ctx, 31, 0x17629Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x17629Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17629Cu) { return; }
    ctx->pc = 0x17629Cu;
label_17629c:
    // 0x17629c: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x17629cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1762a0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1762a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1762a4: 0x26c20060  addiu       $v0, $s6, 0x60
    ctx->pc = 0x1762a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 96));
    // 0x1762a8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1762a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    ctx->pc = 0x1762acu;
}
