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

// Function: entry_00190840
// Address: 0x190840 - 0x190a04
void entry_00190840_0x190840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190840_0x190840");
#endif

    switch (ctx->pc) {
        case 0x1909fcu: goto label_1909fc;
        default: break;
    }

    ctx->pc = 0x190840u;

    // 0x190840: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x190840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x190844: 0x34430015  ori         $v1, $v0, 0x15
    ctx->pc = 0x190844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21);
    // 0x190848: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x190848u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19084c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x19084cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x190850: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x190850u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x190854: 0x7200a628  paddub      $s4, $s0, $zero
    ctx->pc = 0x190854u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x190858: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x190858u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19085c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x19085cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x190860: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x190860u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x190864: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x190864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x190868: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x190868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x19086c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19086cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190870: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x190870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x190874: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x190874u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x190878: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x190878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x19087c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x19087cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x190880: 0x3c020eee  lui         $v0, 0xEEE
    ctx->pc = 0x190880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3822 << 16));
    // 0x190884: 0x3443eeee  ori         $v1, $v0, 0xEEEE
    ctx->pc = 0x190884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61166);
    // 0x190888: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x190888u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19088c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x19088cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x190890: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x190890u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x190894: 0xde2301d0  ld          $v1, 0x1D0($s1)
    ctx->pc = 0x190894u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 464)));
    // 0x190898: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x190898u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19089c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x19089cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1908a0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1908a0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1908a4: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1908a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1908a8: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1908a8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1908ac: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1908acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1908b0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1908b0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1908b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1908b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1908b8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1908b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1908bc: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x1908bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x1908c0: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x1908c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x1908c4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1908c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1908c8: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1908c8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1908cc: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1908ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1908d0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1908d0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1908d4: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x1908d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1908d8: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1908d8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1908dc: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1908dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1908e0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1908e0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1908e4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1908e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1908e8: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1908e8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1908ec: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1908ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1908f0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1908f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1908f4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1908f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1908f8: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1908f8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1908fc: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1908fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x190900: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x190900u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x190904: 0xde2301e8  ld          $v1, 0x1E8($s1)
    ctx->pc = 0x190904u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x190908: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x190908u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19090c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x19090cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x190910: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x190910u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x190914: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x190914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x190918: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x190918u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19091c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x19091cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x190920: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x190920u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x190924: 0xde2301e0  ld          $v1, 0x1E0($s1)
    ctx->pc = 0x190924u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 480)));
    // 0x190928: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x190928u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19092c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x19092cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x190930: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x190930u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x190934: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x190934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x190938: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x190938u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19093c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x19093cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x190940: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x190940u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x190944: 0xde2301d8  ld          $v1, 0x1D8($s1)
    ctx->pc = 0x190944u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 472)));
    // 0x190948: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x190948u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19094c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x19094cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x190950: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x190950u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x190954: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x190954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x190958: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x190958u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19095c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x19095cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x190960: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x190960u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x190964: 0xde2301f0  ld          $v1, 0x1F0($s1)
    ctx->pc = 0x190964u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x190968: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x190968u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19096c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x19096cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x190970: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x190970u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x190974: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x190974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x190978: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x190978u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19097c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x19097cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x190980: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x190980u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x190984: 0x3c02c02a  lui         $v0, 0xC02A
    ctx->pc = 0x190984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49194 << 16));
    // 0x190988: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x190988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x19098c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x19098cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x190990: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x190990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x190994: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x190994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x190998: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x190998u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19099c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x19099cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1909a0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1909a0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1909a4: 0x24024124  addiu       $v0, $zero, 0x4124
    ctx->pc = 0x1909a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16676));
    // 0x1909a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1909a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1909ac: 0x3c021241  lui         $v0, 0x1241
    ctx->pc = 0x1909acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4673 << 16));
    // 0x1909b0: 0x34422412  ori         $v0, $v0, 0x2412
    ctx->pc = 0x1909b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9234);
    // 0x1909b4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1909b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1909b8: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1909b8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1909bc: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1909bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1909c0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1909c0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1909c4: 0x96220118  lhu         $v0, 0x118($s1)
    ctx->pc = 0x1909c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x1909c8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1909c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1909cc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1909ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1909d0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1909D0u;
    {
        const bool branch_taken_0x1909d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1909d0) {
            ctx->pc = 0x190A04u;
            return;
        }
    }
    ctx->pc = 0x1909D8u;
    // 0x1909d8: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x1909d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1909dc: 0xc64001b4  lwc1        $f0, 0x1B4($s2)
    ctx->pc = 0x1909dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1909e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1909e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1909e4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1909e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1909e8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1909e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1909ec: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1909ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1909f0: 0xc7ac0160  lwc1        $f12, 0x160($sp)
    ctx->pc = 0x1909f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1909f4: 0xc040c60  jal         func_103180
    ctx->pc = 0x1909F4u;
    SET_GPR_U32(ctx, 31, 0x1909FCu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x1909FCu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1909FCu) { return; }
    ctx->pc = 0x1909FCu;
label_1909fc:
    // 0x1909fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1909FCu;
    {
        const bool branch_taken_0x1909fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1909fc) {
            ctx->pc = 0x190A0Cu;
            return;
        }
    }
    ctx->pc = 0x190A04u;
}
